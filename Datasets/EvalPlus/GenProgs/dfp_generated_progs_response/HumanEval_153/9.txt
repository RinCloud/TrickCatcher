def Strongest_Extension(class_name, extensions):
    max_strength = float('-inf') # initialize max_strength as negative infinity
    strongest_extension = '' # initialize strongest_extension as an empty string
    
    for extension in extensions:
        CAP = sum(1 for c in extension if c.isupper()) # count number of uppercase letters
        SM = sum(1 for c in extension if c.islower()) # count number of lowercase letters
        strength = CAP - SM # calculate the strength of the extension
        
        if strength > max_strength: # if the strength is greater than the max_strength so far
            max_strength = strength # update max_strength
            strongest_extension = extension # update strongest_extension
    
    return class_name + '.' + strongest_extension # return the class_name and strongest_extension in the specified format