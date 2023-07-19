criba :: [Int] -> [Int]
criba (p:ps) = p : criba [x | x <- ps, x `mod` p /= 0]

primos :: [Int]
primos = criba [2..100000]

--Generará los primos que encuentre entre 2 y 100,000
