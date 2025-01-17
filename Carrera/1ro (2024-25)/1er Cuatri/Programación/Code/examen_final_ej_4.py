def suma_dicts(d1, d2):
    # Buscamos elementos únicos
    d = {}

    for clave in d1:
        if clave not in d2:
            d[clave] = d1[clave]
        else:
            d[clave] = [d1[clave], d2[clave]]
    
    for clave in d2:
        if clave not in d1:
            d[clave] = d2[clave]

    return d

d1 = {}
d2 = {}

el = ""

while el != "q":
    el = input("'q' para salir. Dime los elementos del diccionario 1 (clave,valor): ")
    if el == "q":
        break
    el = el.split(",")
    d1[el[0]] = el[1]

el = ""

print()

while el != "q":
    el = input("'q' para salir. Dime los elementos del diccionario 2 (clave,valor): ")
    if el == "q":
        break
    el = el.split(",")
    d2[el[0]] = el[1]

print()

print(f"Diccionario 1: {d1}")
print(f"Diccionario 2: {d2}")
print(f"Unión de diccionarios: {suma_dicts(d1,d2)}")
