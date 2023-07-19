--1.- Ecuaciones Diferenciales

--Definimos las funciones

func1 :: (Double, Double) -> Double
func1 (y,x) = (x^3)*(exp (-2*x)) - 2*y -- la funcion f(x,y)

func2 :: (Double, Double) -> Double
func2 (y,x) = x*y + x^2 - 2*y^2

func3 :: (Double, Double) -> Double
func3 (y,x) = 1+2*x*y

--Fijamos un intervalo. Podemos definir algunos vslores finales
--Este es global para todos, pues es el rango donde se analizará, no hay necesidad de definir uno para cada uno

ini :: Double
ini = 0.0

fin1 :: Double
fin1 = 0.1

fin2 :: Double
fin2 = 0.2

fin3 :: Double
fin3 = 0.3

fin4 :: Double
fin4 = 0.4

fin5 :: Double
fin5 = 0.5

fin6 :: Double
fin6 = 0.6

fin7 :: Double
fin7 = 0.7

fin8 :: Double
fin8 = 0.8

fin9 :: Double
fin9 = 0.9

fin10 :: Double
fin10 = 1.0

--Otras globales son el paso en el que se hará, y definir el incremento

pasos :: Int
pasos = 100

h :: Double -> Double -> Double -> Double
h b a ps = (b-a)/ps

--Ahora si, aplicamos las condiciones iniciales para cada quien

--Aplica para la primera y segunda

y0 :: Double
y0 = 1.0
x0 :: Double
x0 = 0.0

--Condicion para la tercera

y1 :: Double
y1 = 3.0
x1 :: Double
x1 = 0.0

pasoEuler :: ((Double, Double) -> Double) -> Double -> (Double, Double) -> (Double, Double)
pasoEuler f ps (y, x) = (y', x')
    where
        y' = y + ps * f (y, x)
        x' = x + ps

euler :: ((Double, Double) -> Double) -> Double -> Double -> Double -> Double -> [(Double, Double)]
euler f1 tin tm xin ps = xtpar
    where
        iterador = iterate $ pasoEuler f1 ps
        xtpar = takeWhile (\(y, x) -> x <= tm) $ iterador (xin, tin)

--2.- Integrales

--Implementamos la funcion para el método del trapecio

--Definimos nuestras funciones

--func x = x**2

--func x = x*(exp x)

func x = (x**2)*(cos x)

l = pi/2

integrate :: Double -> Double -> Double -> Double -> Double -> Double
integrate x n lim0 newlim0 lim1
 | newlim0 >= lim1 = (x * delta)
 | x == 0 = integrate (x + (func lim0 + func lim1)/2) n lim0 (newlim0 + delta) lim1
 | otherwise = integrate (x + func newlim0) n lim0 (newlim0 + delta) lim1
 where delta = ((lim1-lim0)/n)

--3.- Funcion de aceleracion

--Antes de cualquier cosa, vemos que el problema habla de una repulsión de carga con la misma magnitud
--y signo, eso quiere decir que queremos encontrar F = k (q_1 q_2) / |r|^2 u. Definamos la función

--Definimos el tipo de valor para los estados

type Temp = Double
type Desp = Vec
type Vel = Vec
type Est = (Temp, Desp, Vel)

type FunAcc = Est -> Vec

--Y recordemos que debemos cargar nuestro programa de vectores

data Vec = Vec { xComp :: Double, yComp :: Double, zComp :: Double} deriving Show

(^+^) :: Vec -> Vec -> Vec
r ^+^ t = Vec (xComp r + xComp t) (yComp r + yComp t) (zComp r + zComp t)

(^-^) :: Vec -> Vec -> Vec
r ^-^ t = Vec (xComp r - xComp t) (yComp r - yComp t) (zComp r - zComp t)

(*^) :: Double -> Vec -> Vec
a *^ r = Vec (a * xComp r) (a * yComp r) (a * zComp r)

(^*) :: Vec -> Double -> Vec
r ^* a = Vec ((xComp r) * a) ((yComp r) * a) ((zComp r) * a)

(^/) :: Vec -> Double -> Vec
r ^/ a = Vec (xComp r / a) (yComp r / a) (zComp r / a)

(^.^) :: Vec -> Vec -> Double
r ^.^ t = (xComp r * xComp t) + (yComp r * yComp t) + (zComp r * zComp t)

(^*^) :: Vec -> Vec -> Vec
r ^*^ t = Vec ((yComp r)*(zComp t) - (yComp t)*(zComp r)) ((xComp t)*(zComp r) - (zComp t)*(xComp r)) ((yComp t)*(xComp r) - (xComp t)*(yComp r))

norm :: Vec -> Double
norm r = ((xComp r)**2 + (yComp r)**2 + (zComp r)**2)**(1/2)

--Ahora sí, definimos el pasoEuler para los distintos estados de la funcion

pasoEulerr :: FunAcc -> Double -> Est -> Est
pasoEulerr a dt (t,r,v) = (t',r',v')
    where
        t' = t + dt
        r' = r ^+^ v ^* dt
        v' = v ^+^ a(t,r,v) ^* dt

--Definimos la funcion

carga :: FunAcc
carga (t,r,v) = (k * (q**2) / norm r ^2) *^ u
    where
        k = 8.987e9 --Nm^2 / C^2
        q = 1.602e-19 --C
        u = (-1) *^ r ^/ norm r

--En general la carga puede ser cualquiera porque no se especifica, pero entrando aquí se puede modificar el
--valor de la carga segun se desee.

--Ahora si implementamos Euler

eulerr :: FunAcc -> Double -> Est -> [Est]
eulerr a dt = iterate (pasoEulerr a dt)

--Desde aqui podemos ir variando los valores como lo necesitemos para obtener los estados correspondientes

tt = 10.0
rr = Vec 1.0 0.0 (-5.0)
vv = Vec 3.0 2.0 1.0
aa = 0.01

estados :: [Est]
estados = eulerr carga aa (tt, rr, vv)

