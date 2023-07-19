n = int(input("Cuanto quieres sumar: "))

lista = []

for _ in range(n):
    lista.append(float(input("Dame un valor: ")))

suma = 0

for elemento in lista:
    #suma = suma + elemento #Es menos eficaz
    suma += elemento #Más efectivo

print(lista)
print("Tu suma es: " + str(suma))

m = int(input("Cuanto quieres sumar: "))

lista2 = [0 for _ in range(m)]

for index in range(len(lista)):

    lista2[index] = float(input("Dame un valor: "))

suma2 = 0

for elemento2 in lista2:
    suma2 += elemento2

print(lista2)
print("Tu suma es: " + str(suma2))

#Lo anterior en lista2 fue agregar 0, por ejemplo si agregamos del 1 al 10

lista3 = ["Ok"+str(2*i) for i in range(1,11,1)]

print(lista3)
