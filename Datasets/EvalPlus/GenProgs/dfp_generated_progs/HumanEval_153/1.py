def Strongest_Extension(class_name, extensions): 
    strength = float('inf') 
    strongest_extension = '' 
    for ext in extensions: 
        cap = len([c for c in ext if c.isupper()]) 
        sm = len([c for c in ext if c.islower()]) 
        ext_strength = cap - sm 
        if ext_strength < strength: 
            strength = ext_strength 
            strongest_extension = ext 
    return f"{class_name}.{strongest_extension}"