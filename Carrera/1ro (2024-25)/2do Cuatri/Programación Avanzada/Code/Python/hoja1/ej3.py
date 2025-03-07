class Persona():
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

p1 = Persona("Carlos", 25)
p1.apellido = "Vinateros"

print(p1.__dict__)

