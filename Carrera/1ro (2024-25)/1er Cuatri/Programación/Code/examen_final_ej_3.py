# Para imprimir matrices
def print_matrix(m):
    for fila in m:
        for el in fila:
            print(f"{el} ", end="")
        print()

# Función que transpone la matriz
def transpose(m):
    mt = []
    filas = len(m)
    cols = len(m[0])
    
    # Iteramos por el primer elemento de cada fila, y lo añadimos como una fila a mt
    # Luego iteramos por el segundo elemento de cada fila, y lo añadimos como una fila mt

    for i in range(cols):
        fila = []
        for j in range(filas):
            fila.append(m[j][i])

        mt.append(fila)

    return mt

# Pedimos filas y columnas
filas = int(input("Número de filas de la matriz: "))

cols = int(input("Número de columnas de la matriz: "))

# Pedimos los elementos de la matriz
m = []

for i in range(filas):
    fila = []
    for j in range(cols):
        fila.append(float(input(f"Dame el elemento de la fila {i+1} y columna {j+1}: ")))

    m.append(fila)

print("Matriz ingresada:")
print_matrix(m)

print()

print("Matriz transpuesta: ")
print_matrix(transpose(m))

print()

suma = 0

for i in range(filas):
    for j in range(cols):
        suma += m[i][j]

print(f"Suma de los elementos: {suma}")

print()

if filas == cols: # Si es cuadrada
    suma = 0
    for i in range(filas):
        suma += m[i][i]

    print(f"La matriz es cuadrada. Suma de la diagonal: {suma}")
else:
    print("La matriz no es cuadrada.")
