class Persona():
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

if __name__ == "__main__":
    p1 = Persona("Juan", 5)
    p2 = Persona("Carlos", 17)

    print(p1.nombre, p1.apellido)
    print(p2.nombre, p2.apellido)