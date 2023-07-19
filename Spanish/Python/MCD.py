r1 = int(input("Da el numero"))
r2 = int(input("Da el otro"))
a = r1
b = r2
r3 = r1 % r2 #El porcentaje representa el residuo
while not(r3 == 0):
    r1 = r2
    r2 = r3
    r3 = r1 % r2

print("El máximo común divisior de {} y de {} es {}".format(a,b,r2))

