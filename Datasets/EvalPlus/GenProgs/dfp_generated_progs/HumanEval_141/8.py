def file_name_check(file_name):
    digits = 0
    alphabets = 0
    
    # Count the number of digits and alphabets in the file name
    for char in file_name:
        if char.isdigit():
            digits += 1
        elif char.isalpha():
            alphabets += 1
    
    # Check if there are more than three digits in the file name
    if digits > 3:
        return 'No'
    
    # Check if the file name contains exactly one dot
    if file_name.count('.') != 1:
        return 'No'
    
    # Split the file name into two parts: before dot and after dot
    parts = file_name.split('.')
    before_dot = parts[0]
    after_dot = parts[1]
    
    # Check if the substring before the dot is empty or doesn't start with a letter
    if len(before_dot) == 0 or not before_dot[0].isalpha():
        return 'No'
    
    # Check if the substring after the dot is not one of ['txt', 'exe', 'dll']
    if after_dot not in ['txt', 'exe', 'dll']:
        return 'No'
    
    # If all conditions are met, return 'Yes'
    return 'Yes'