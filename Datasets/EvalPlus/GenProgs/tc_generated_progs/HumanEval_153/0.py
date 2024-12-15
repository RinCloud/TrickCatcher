def Strongest_Extension(class_name, extensions):
    strongest_strength = float('-inf')
    strongest_extension = ""
    
    for extension in extensions:
        cap = sum(1 for letter in extension if letter.isupper())
        sm = sum(1 for letter in extension if letter.islower())
        strength = cap - sm
        
        if strength > strongest_strength:
            strongest_strength = strength
            strongest_extension = extension
            
    return f"{class_name}.{strongest_extension}"
    