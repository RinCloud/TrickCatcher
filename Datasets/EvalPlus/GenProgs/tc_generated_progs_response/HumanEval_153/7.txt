def Strongest_Extension(class_name, extensions):
    strongest_strength = -1
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
        if strength >= strongest_strength:  # Changed > to >= to get the first extension with same strength
            strongest_strength = strength
            strongest_extension = extension
    return f"{class_name}.{strongest_extension}"