def file_name_check(file_name):
    # Check if there are more than three digits in the file name
    if sum(1 for char in file_name if char.isdigit()) > 3:
        return 'No'
    
    # Check if the file name contains exactly one dot
    if file_name.count('.') != 1:
        return 'No'
    
    # Split the file name into the substring before the dot and the substring after the dot
    name, extension = file_name.split('.')
    
    # Check if the substring before the dot is not empty and starts with a letter from the latin alphabet
    if not name or not name[0].isalpha():
        return 'No'
    
    # Check if the substring after the dot is one of ['txt', 'exe', 'dll']
    if extension not in ['txt', 'exe', 'dll']:
        return 'No'
    
    # If all conditions are satisfied, return 'Yes'
    return 'Yes'