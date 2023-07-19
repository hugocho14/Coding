def expon(n,x):
    return n**x #n elevado a "a"

def parabola(n,x):
    return x**n 

def suma(n,x):
    return expon(n,x) + parabola(n,x)

def my_function(function, n, x): #Esto se define así para que puedas llamar a cualquier funcion, se les llaman funciones anonimas
    return function(n, x) + 1

print(expon(2,3))
print(parabola(2,3))

print(my_function(expon, 2, 3))
print(my_function(parabola, 2, 3))