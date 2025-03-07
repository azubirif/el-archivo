class Banco():
    tasa = 0.02

    def __init__(self, nombre, saldo):
        self.nombre = nombre
        self.saldo = saldo
    

b = Banco("Pedroche", -155)
b.pais = "Las Palmas"
print(b.__dict__)
Banco.pais = "Spain"
print(Banco.__dict__)
print(b.__dict__)