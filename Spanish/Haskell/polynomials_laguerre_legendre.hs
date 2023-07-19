--PROYECTO FINAL: Por Hinojosa Novales Hugo Alejandro y Yael

--En este código se pretende implementar al menos dos polinomios, los de Laguerre y Legendre.

--POLINOMIOS DE LAGUERRE

--Lo primero que queremos hacer, es definir el factorial

fact :: Double -> Double
fact n
    |n < 0 = error "Estos son tus polinomios, cada elemento de la lista es el monomio correspondiente, en cada tercia o quintupla, el primero siempre es el coeficiente, las cadenas son el polinomio x fijo que tiene el algoritmo y a su derecha tiene su respectivo exponente"
    |n == 0 = 1
    |otherwise = n * (fact (n-1))

--También queremos utilizar el coeficiente binomial

coef :: Double -> Double -> Double
coef m k
    |m < k = 1
    |otherwise = fact m / (fact (m-k) * fact k)

enesimo :: Double -> Double -> Double
enesimo n k = (-1)**k * coef n k * (1 / fact k)

--Ya tenemos esto, ahora es momento de ver cómo podemos guardar los valores

val :: Double -> Double -> (Double, String, Double)
val n k
    |k == 0.0 = (1.0, "1" ,0.0)
    |k > n = error "Que sea menor el segundo numero al menos"
    |otherwise = (enesimo n k, "x", k)

--Vamos a querer que la funcion baje, y cada bajada es la que iremos registrando, primero veamos cómo baja

valcount :: Double -> Double -> [(Double, String, Double)]
valcount n k = val n k : valcount n (k-1)

--Implementando esto, podemos hacer algo similar para los Polinomios de Legendre

--POLINOMIOS DE LEGENDRE

enesimoL :: Double -> Double -> Double
enesimoL n k = (coef n k)**2

vaL :: Double -> Double -> (Double, String, Double, String, Double)
vaL n k
    |k == 0.0 = (1.0, "1" ,5.0, "1", 0.0)
    |k > n = error "Que sea menor el segundo numero al menos"
    |otherwise = (1/2**n * enesimo n k, "x+1", n-k, "x-1", k)

vaLcount :: Double -> Double -> [(Double, String, Double, String, Double)]
vaLcount n k = vaL n k : vaLcount n (k-1)
