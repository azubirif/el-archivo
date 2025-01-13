# Ej 2
n = int(input("Dame un número entero: "))

d = {}

for i in range(1, n+1):
    d[i] = i**2

print(d)

# Ej 3
l1 = input("Dame la lista 1: ").split(" ")
l2 = input("Dame la lista 2: ").split(" ")

if len(l1) != len(l2):
    print("La longitud de las listas no coincide")
else:
    d = {}
    for e, i in enumerate(l1):
        d[e] = l2[i]

    print(d)

# Ej 4
def eliminar_duplicados(d: dict) -> dict:
    vals = []
    d2 = {}
    for i in d:
        val = d[i]
        if val not in vals:
            vals.append(val)
            d2[i] = val

    return d2

# Ej 5
def invertir_dict(d):
    d2 = {}
    for i in d:
        if d[i] not in d2:
            d2[d[i]] = i

    return d2

# Ej 6
def unir_dicts(d1, d2):
    # Repetidos
    if len(d1) != len(d2):
        return {}
    d = {}
    for i in d1:
        if i in d2: #Si la clave está en ambos diccionarios
            d[i] = [d1[i], d2[i]]
        else:
            d[i] = d1[i]

    for i in d2:
        if i not in d:
            d[i] = d2[i]

    return d

# Ej 7
def contar_caracteres_1(s):
    d = {}
    vistas = []
    for i in s:
        if i not in vistas:
            vistas.append(i)
            d[i] = s.count(i)

    return d

def contar_caracteres_2(s):
    return contar_caracteres_1(s.lower())

# Ej 8
def buscar_usuarios(d):
    uno = d.keys()[0]
    d1 = d[uno]
    dni1 = d1
    l1 = len(d1)

    dni2 = d1
    l2 = int(d2)

    dni3 = d1
    l3 = l2

    for i in d:
        if len(d[i]["nombre"]) > l1:
            dni1 = d[i]
            l1 = len(d[i]["nombre"])
        if int(d[i]["edad"]) > l2:
            dni2 = d[i]
            l2 = int(d[i]["edad"]
        if int(d[i]["altura"]) > l3:
            dni3 = d[i]
            l3 = int(d[i]["altura"])

    print(f"Mayor nombre: {dni1}\nMayor edad: {dni2}
    \nMayor altura: {dni3}")

def comprobar_datos_diccionario(d):
    valid = True
    if len(d) < 8:
        valid = False
    for i in d:
        if not i[:8].isnumeric():
            valid = False
        if not i[8] == "-":
            valid = False
        if not i[-1].isalpha():
            valid = False
        if len(d[i]) != 3:
            valid = False
        if not d[i]["nombre"].isalpha():
            valid = False
        if not d[i]["edad"].isnumeric() and not d[i]["altura"].isnumeric():
            valid = False

    if valid == False:
        print("Error, datos no válidos")
        return False

    buscar_usuarios(d)

    return True
