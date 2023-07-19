#Ejercicio 1: Factorial

def fact(n):
    if n < 0:
        print("In this programm there's no negative factors")
        return None
    elif n == 0 or n == 1:
        return 1
    else:
        m = n*fact(n-1)
        return m

n=int(input("Insert number to calculate factorial: "))
print("Factorial of {} is:".format(n), fact(n))

#Ejercicio 2: Combinatoria

def comb(p,q):
    if 0 < p and p < q:
        return 1
    elif (p < 0) or (q < 0):
        print("There's no combinations for negative numbers")
        return None
    else:
        c = (fact(p))/(fact(p-q)*fact(q))

    return c

p=int(input("\n Second part \n First combinatory number: "))
q=int(input("Second combinatory number: "))
print("THe number of combinations is: ", comb(p,q))

#Ejercicio 3: Fibonacci

def fibo(n):

    if n < 0:
        print("Fibonacci doesn't start with negative numbers")
        return None
    elif n==0:
        return 0
    elif n==1:
        return 1
    else:
        x=fibo(n-1)+fibo(n-2)
        return x

def addfibo(m):
    serie = []

    if m < 0:
        print("There's no negative terms in Fibonacci")
        return None
    else:
        for i in range(m):
            serie.append(fibo(i))
        return serie

r = int(input("\n Third part \n How many Fibonacci terms do you want?: "))
print("The terms are: ",addfibo(r))

#Ejercicio 4: Expansión de (2x+1)^6

def pascal(n):
    if n==1:
        return [1]
    else:
        x=[0]+pascal(n-1)
        y=pascal(n-1)+[0]
        return [i+j for i,j in zip(x,y)]

def addtolist(n, func):

    list = []

    for i in range(n):
        list.append(func(i))
    return list

w = 7

coef = pascal(w)

print("\n Fourth part \n Expantion of (2x+1)^6 is:", end=" ")

for i in range(1,w):
    print("{}".format(coef[i-1]*((2)**(w-i))*(1**(i-1))) + "x^{} +".format(w-i), end=" ")

print("1 \n")

#Ejercicio 4 extra: Expansión de términos de la forma (ax+b)^n

a = int(input(" Fourth part extra \n Expand (ax+b)^n \n Insert a: "))
b = int(input("Insert b: "))
c = int(input("Insert n: "))

co = pascal(c+1)

print("Expansion of ({}x+{})^{} is:".format(a,b,c), end=" ")

for i in range(1,c+1):
    print("{}".format(co[i-1]*((a)**((c+1)-i))*(b**(i-1))) + "x^{} +".format((c+1)-i), end=" ")

print("{} \n".format(b**(c)))
