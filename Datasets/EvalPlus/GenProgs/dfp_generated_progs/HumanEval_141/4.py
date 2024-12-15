def file_name_check(file_name):
    if not isinstance(file_name, str):
        return 'No'
    
    dot_index = file_name.find('.')
    if dot_index == -1 or dot_index == 0 or dot_index == len(file_name) - 1:
        return 'No'
    
    substr = file_name[:dot_index]
    if not substr[0].isalpha() or not substr.isalnum():
        return 'No'
    
    extension = file_name[dot_index+1:]
    if extension not in ['txt', 'exe', 'dll']:
        return 'No'
    
    count = sum(1 for char in file_name if char.isdigit())
    if count > 3:
        return 'No'
    
    return 'Yes'