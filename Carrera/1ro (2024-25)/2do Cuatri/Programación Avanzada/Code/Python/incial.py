from random import choices
from os import system

n = ["Juan", "Alfonso", "Carlos", "Pedro", "Zupiti"]

i = ""
while i != "STOP":
    system("clear") #Limpiar la consola
    print(choices(n)[0])
    i = input("Pulse 'STOP' para detener.\n")
