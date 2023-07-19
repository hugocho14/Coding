#matriz = [[1,2,3],
#         [4,5,6],
 #         [7,8,9]]

#print(matriz)

# carro:
 #   color = ""
 # año = 1223
 #  numero_de_puertas = 123

 #   def llevar(desde,hasta):
 #       pass
 #   xd

import random

class carro(object):
    def __init__(self, año, color = "Gris", puertas = 4, nombre = "Carrito"):
        self.año = año
        self.color = color
        self.numero_de_puertas = puertas
        self.nombre = nombre

    def llevar(self, desde, hasta):
        print("Hola soy "+self.nombre+" y te llevaré desde: "+desde+"hasta: "+hasta)

        return "Me falta gasolina" if random.randint(0,2) == 0 else "Todavía aguanto"



def main():
    mi_carro = carro(1980, nombre = "Hugo")
    mi_carro2 = carro(1970,"Azul")
    mi_carro.color = "Rojo"
    print(mi_carro.llevar("Mi casa","La facultad"))
    print(mi_carro)
    print(mi_carro.año)
    print(mi_carro.color)
    print(mi_carro2)
    print(mi_carro2.año)
    print(mi_carro2.color)

if __name__ == "__main__":
    main()




