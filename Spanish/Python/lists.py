lista = [4,5,6]
tupla = (1,2,3)
conjunto = {7,8,9}

print(lista)
print(tupla)
print(conjunto)

#Ahora las funciones de las listas#

lista.append("xd") #Añade un elemento al final de la lista#
#lista.clear() #La función regresa una lista vacía, la "limpia"#

lista2 = lista

print(lista)
print(lista2)

lista2.append("lol") #En este punto decir que lista es lista2 le hace referencia, pero si se quiere poner otra lista3 pero con los elementos de lista, entonces se pone copy#

print(lista)
print(lista2)

lista3 = lista.copy()

lista3.append("lmao")

print(lista)
print(lista3)

#Ahora para sumar listas

print(lista+lista2)

lista.extend(lista2)

print(lista)

print(lista.index("lol")) #para imprimir la posición del elemento

lista.insert(0,"Abueno adios master") #Agregas en la posición 0 ese elemento

print(lista)

#lista.insert(1,lista2) Se puede agregar una lista a otra

print(lista)

print(lista[2 : 5]) #Esto es para imprimir el elemento en la posición 2 hasta el 4, pues el 5 es el limite

lista.remove("lol")

print(lista)

lista.reverse()

print(lista)

lista.pop(0)

print(lista)

lista.clear()

print(lista)

lista.append(1)
lista.append(5)
lista.append(4)

print(lista)

print(len(lista)) #para ver su cardinalidad