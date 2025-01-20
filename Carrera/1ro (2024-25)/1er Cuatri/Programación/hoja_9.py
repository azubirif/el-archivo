# Ej 1
def ej1(s):
    if s.isinstance(set) and len(s) > 7:
        d = {}
        l = list(s)
        m = l[0]
        M = l[0]

        for i in s:
            if i > M:
                i = M
            if i < m:
                i = m

        d["Mínimo"] = m
        d["Máximo"] = M

        return d

# Ej 2
def ej2(s):
    d = {"Enteros": [], "Decimales": [], "Cadenas": []}

    for i in s:
        if i.isinstance(int):
            d["Enteros"].append(i)
        elif i.isinstance(float):
            d["Decimales"].append(i)
        else:
            d["Cadenas"].append(i)

    return d

# Ej 3
def ej3(l):
    return set(l)

# Ej 4 - Se cumple siempre

# Ej 5
def ej5(l):
    s = set()

    for i in l:
        s.append({i, mean(i)})

    return s

# Ej 6
def ej6(l1, l2):
    # Primero miramos cual es subconjunto de cual
    if l1.issubset(l2):
        # l1 está contenido en l2
        sd = l1.symmetric_difference(l2)
        print(f"En la lista 1 faltan los elementos {sd}")
    else:
        # l2 está contenido en l1
        sd = l2.symmetric_difference(l1)
        print(f"En la lista 2 faltan los elementos {sd}")

# Ej 7
def contains_vocals(s):
    vocals = {"a","e","i","o","u"}
    return len(vocals.intersection(s)) == 5

# Ej 8
def is_heterogramo(s):
    return set(list(s)) == list(s)

# Ej 9
def ej9(s1: str, s2: str):
    if len(s1) + len(s2) >= 10:
        if s1 == s2:
            print("Sea un poco más original 🤕")
        if len(list(s1).intersection(list(s2))) > 3:
            return ("".join(set(s1).symmetric_difference(set(s2))))
        else:
            return s1 + s2
        if set(s1).issubset(set(s2)):
            print(f"{s1} está contenido en {s2}")
        elif set(s2).issubset(set(s1)):
            print(f"{s2} está contenido en {s1}")


