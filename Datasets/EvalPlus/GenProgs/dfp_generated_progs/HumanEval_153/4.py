def Strongest_Extension(class_name, extensions):
    def strength(extension):
        return extension.count('A') - extension.count('a')
    
    strongest_extension = extensions[0]
    for extension in extensions:
        if strength(extension) > strength(strongest_extension):
            strongest_extension = extension
    
    return class_name + '.' + strongest_extension