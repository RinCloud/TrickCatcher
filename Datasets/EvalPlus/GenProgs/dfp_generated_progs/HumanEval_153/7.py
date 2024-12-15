def Strongest_Extension(class_name, extensions):
    strengths = []
    for extension in extensions:
        CAP = sum(1 for char in extension if char.isupper())
        SM = sum(1 for char in extension if char.islower())
        strength = CAP - SM
        strengths.append(strength)
        
    max_strength = max(strengths)
    max_strength_extensions = [extension for extension, strength in zip(extensions, strengths) if strength == max_strength]
    
    return class_name + '.' + max_strength_extensions[0]