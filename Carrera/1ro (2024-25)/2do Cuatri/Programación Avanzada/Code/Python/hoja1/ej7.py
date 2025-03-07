class Rectangulo():
    def __init__(self, lado1, lado2):
        self.lado1 = lado1
        self.lado2 = lado2
    

r = Rectangulo(5,2)
print(r.lado1 * r.lado2)