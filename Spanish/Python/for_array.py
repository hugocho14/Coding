for i in range(0,10,1):
    print(i)
    print("Tu")
#Puede abreviarse poniendo solo un numero, la maquina sobreentiende que inicias en 0 e incrementas de 1 en 1

for i in range(10):
    print(i)
    print("Tu")

array = [1,3,5,7,9]

for elemento in array:
    print(elemento)

for index in range(len(array)): #Es para tener control sobre los indices que se toman"
    print(array[index])

diccionario = {"nombre" : "Hugo", "altura" : "1.70"}

for key in diccionario.keys():
    print(diccionario[key])

a = 10

if a in array:
    print(str(a)+ " Está en array")
else:
    print(str(a)+ " No está en array")

 
