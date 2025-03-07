class Circulo():
    pi = 3.14159

    def __init__(self, radio):
        self.radio = radio
    
    def Area(self):
        return self.radio**2 * self.pi
    
class Estudiante():
    escuela = "UNIE'NT"

    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad


def selector(obj):
    if isinstance(obj, Estudiante):
        print("Es estudiante")
    elif isinstance(obj, Circulo):
        print("Es círculo")
    else:
        print("No es ninguno de los dos")