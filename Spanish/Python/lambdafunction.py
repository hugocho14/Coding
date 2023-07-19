def exponencial(n):
    return lambda x : n**x

def composicion(n):
    return lambda func : func(n)

variable = composicion(8)
print(variable(lambda x: x+1))

expo = exponencial(5)

for i in range(4):
    print(expo(i))