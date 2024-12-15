def file_name_check(file_name):
    valid_extensions = ['txt', 'exe', 'dll']
    num_digits = sum([1 for char in file_name if char.isdigit()])
    num_dots = sum([1 for char in file_name if char == '.'])
    dot_index = file_name.find('.')
    before_dot = file_name[:dot_index]
    after_dot = file_name[dot_index+1:]
    
    if num_digits > 3 or num_dots != 1:
        return 'No'
    if not before_dot or not before_dot[0].isalpha():
        return 'No'
    if after_dot not in valid_extensions:
        return 'No'
    
    return 'Yes'