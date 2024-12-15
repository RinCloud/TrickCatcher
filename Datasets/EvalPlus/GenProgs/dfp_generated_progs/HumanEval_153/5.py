def Strongest_Extension(class_name, extensions):
    strongest_extension = extensions[0]
    strongest_extension_strength = count_uppercase_letters(strongest_extension) - count_lowercase_letters(strongest_extension)
    
    for extension in extensions[1:]:
        extension_strength = count_uppercase_letters(extension) - count_lowercase_letters(extension)
        if extension_strength > strongest_extension_strength:
            strongest_extension = extension
            strongest_extension_strength = extension_strength
    
    return class_name + '.' + strongest_extension
def count_uppercase_letters(string):
    uppercase_count = 0
    for char in string:
        if char.isupper():
            uppercase_count += 1
    return uppercase_count
def count_lowercase_letters(string):
    lowercase_count = 0
    for char in string:
        if char.islower():
            lowercase_count += 1
    return lowercase_count