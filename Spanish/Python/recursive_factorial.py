def factorial_iterativo(m):
    if m < 0:
        raise ValueError("Tenemos otro programa con la función gamma para que puedas hacer tus mmdas agusto uwu")
    fact = 1
    if m == 0:
        fact = 1
    else:
        for i in range(1,m+1):
            fact = fact*1
    return fact

def factorial_recursivo(m):
    if m < 0:
        raise ValueError("Tenemos otro programa con la función gamma para que puedas hacer tus mmdas agusto uwu")

    fact = 0

    if m == 0:
        fact = 1
    else:
        fact = m*factorial_recursivo(m-1)
    return fact

def main(): 
    m = int(input("Da el número xd: "))
    print(factorial_recursivo(m))

if __name__ == "__main__":
    main()

