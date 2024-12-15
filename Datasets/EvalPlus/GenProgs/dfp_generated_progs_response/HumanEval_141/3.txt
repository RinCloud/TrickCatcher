def file_name_check(file_name):
    if file_name.count('.') != 1:
        return 'No'
    
    name, extension = file_name.split('.')
    
    if extension not in ['txt', 'exe', 'dll']:
        return 'No'
    
    if not name[0].isalpha():
        return 'No'
    
    if len([char.isdigit() for char in name]) > 3:
        return 'No'
    
    return 'Yes'