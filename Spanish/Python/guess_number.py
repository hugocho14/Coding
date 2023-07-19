import random
running = True
while running:
    running = False #Se pone para por si quieres que el programa cierre al no escribir ni "si" ni "no"
    a = random.randint(1,10)
    b = random.randint(1,10)
    c = int(input("Cuánto es {} + {} ?".format(a,b)))
    if c == a+b:
        print("Correcto")
    else:
        print("error")

    continuar = str(input("Desea continuar si o no: "))

    if continuar == ("si" or "Si" or "sI" or "SI"):
        running = True
    elif continuar == "no" or continuar == "No" or continuar == "nO" or continuar == "NO":
        running = False
