class Estudiante():
    escuela = "UNIE'NT"

    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad


e1 = Estudiante("John", 2)
e2 = Estudiante("Pipi", 182)

print(e1.__dict__, e1.escuela)
print(e2.__dict__, e2.escuela)