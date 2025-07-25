def Strongest_Extension(class_name, extensions):
    strongest_strength = -float('inf')
    strongest_extension = ""
    for extension in extensions:
        cap = 0
        sm = 0
        for letter in extension:
            if letter.isupper():
                cap += 1
            elif letter.islower():
                sm += 1
        strength = cap - sm
        if strength > strongest_strength or (strength == strongest_strength and extensions.index(extension) < extensions.index(strongest_extension)):
            strongest_strength = strength
            strongest_extension = extension
    return f"{class_name}.{strongest_extension}"