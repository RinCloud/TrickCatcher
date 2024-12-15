def Strongest_Extension(class_name, extensions):
    strongest = None
    max_strength = None
    for ext in extensions:
        cap = sum(1 for ch in ext if ch.isupper())
        sm = sum(1 for ch in ext if ch.islower())
        strength = cap - sm
        if max_strength is None or strength > max_strength:
            max_strength = strength
            strongest = ext
    return f"{class_name}.{strongest}"