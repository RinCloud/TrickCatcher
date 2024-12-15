def file_name_check(file_name):
    if file_name.count('.') != 1:
        return 'No'
    else:
        name_parts = file_name.split('.')
        if len(name_parts[0]) == 0 or not name_parts[0][0].isalpha():
            return 'No'
        if name_parts[1] not in ['txt', 'exe', 'dll']:
            return 'No'
        if sum(1 for char in name_parts[0] if char.isdigit()) > 3:
            return 'No'
    return 'Yes'