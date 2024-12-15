def Strongest_Extension(class_name, extensions):
    strengths = []
    for extension in extensions:
        CAP = sum(1 for c in extension if c.isupper())
        SM = sum(1 for c in extension if c.islower())
        strength = CAP - SM
        strengths.append(strength)
    max_strength = max(strengths)
    index = strengths.index(max_strength)
    return f"{class_name}.{extensions[index]}"