def Strongest_Extension(class_name, extensions):
    max_strength = float('-inf')
    strongest_extension = ''
    
    for extension in extensions:
        CAP = sum(1 for char in extension if char.isupper())
        SM = sum(1 for char in extension if char.islower())
        strength = CAP - SM
        
        if strength > max_strength:
            max_strength = strength
            strongest_extension = extension
        elif strength == max_strength and extension < strongest_extension:
            strongest_extension = extension
    
    return f"{class_name}.{strongest_extension}"