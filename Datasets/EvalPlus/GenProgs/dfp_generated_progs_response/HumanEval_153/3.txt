def Strongest_Extension(class_name, extensions):
    strength = float('-inf')
    strongest_extension = ''
    for extension in extensions:
        cap = sum(1 for c in extension if c.isupper())
        sm = sum(1 for c in extension if c.islower())
        ext_strength = cap - sm
        if ext_strength > strength:
            strength = ext_strength
            strongest_extension = extension
    return class_name + '.' + strongest_extension