a = lambda n, x : n**x #Igual puedes inicializar a n = 2 y entonces si pones print(a(x = i)) devuelve lo mismo

#print((lambda n, x : n**x)(2,3)) #Lambda es el que abrevia lo anterior, en vez de definir la función y decirle que regrese los valores, lambda asume que se regresan ciertos valores, solo puede ser en una linea
for i in range(4):
    print(a(2,i))