--Ejercicio 1.- Definición de operaciones vectoriales

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

--Ejercicio 2.- Euclides

mcd :: Int -> Int -> Int
mcd m n
    | m == n = m
    | m > n = mcd m m-n
    | otherwise = mcd n n-m

--Ejercicio 3.- Fuerza de Lorentz

lorentz :: Vec -> Vec -> Vec
lorentz v b = q *^ (v ^*^ b)
    where
        q = 1.6e-19--C

p = Vec 1.1e6 1.2e6 0
q = Vec 0 1.3e-2 0.1e-2

--RESPUESTA: La fuerza será de F = (1.92e-16, -1.76e-16, 2.288e-15)

--Ejercicio 4.- Resistencia y Corriente

resis :: Double -> Double -> Double -> Double
resis ro lo su = ro*(lo/((3.141592)*(su/2)^2))

corr :: (Double -> Double -> Double -> Double) -> Double -> Double -> Double -> Double -> Double
corr f ro lo su v = (v/(f ro lo su))

c = 1.71e-8

l = 20

s = 0.05

--RESPUESTA: Será una corriente de 574121.345 A

--Ejercicio 5.- Transformacion de Bits

type Bit = Int

bin :: Int -> [Bit]
bin n
    | n == 0 = []
    | otherwise = bin (n `div` 2) ++ [n `mod` 2]

int :: [Bit] -> Int
int b = sum [w*b | (w,b) <- zip weights (reverse b)]
  where weights = iterate (*2) 1
