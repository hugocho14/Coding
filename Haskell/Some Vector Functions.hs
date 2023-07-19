dot :: [Float] -> [Float] -> Float
dot [a,b,c] [e,f,g] = a*e + b*f + c*g

cross :: [Float] -> [Float] -> [Float]
cross [x,y,z] [m,n,o] = [y*o-n*z,m*z-x*o,x*n-m*y]

-- The area between the vector is calculated with the norm, so we define it

norm :: [Float] -> Float
norm [xa,xb,xc] = sqrt (xa**2 + xb**2 + xc**2)

-- Also, for volume we can define the triple product

triple :: [Float] -> [Float] -> [Float] -> Float
triple [p,q,r] [x,y,z] [m,n,o] = (y*o-n*z)*p + (m*z-x*o)*q + (x*n-m*y)*r


