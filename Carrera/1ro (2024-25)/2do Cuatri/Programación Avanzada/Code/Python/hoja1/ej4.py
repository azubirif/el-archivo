class Circulo():
    pi = 3.14159

    def __init__(self, radio):
        self.radio = radio
    
    def Area(self):
        return self.radio**2 * self.pi
    
c1 = Circulo(5)
c2 = Circulo(10)

print(c1.Area(), c2.Area())