def file_name_check(file_name):
    digits = 0
    for char in file_name:
        if char.isdigit():
            digits += 1
    if digits > 3:
        return 'No'
    elif file_name.count('.') != 1:
        return 'No'
    else:
        parts = file_name.split('.')
        if parts[0] == '' or not parts[0][0].isalpha():
            return 'No'
        elif parts[1] not in ['txt', 'exe', 'dll']:
            return 'No'
        else:
            return 'Yes'