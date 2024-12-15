def file_name_check(file_name):
    digits = 0
    if len(file_name) < 5:
        return 'No'
    file_name = file_name.lower()
    if file_name.count('.') != 1:
        return 'No'
    parts = file_name.split('.')
    if not parts[0].isalpha():
        return 'No'
    for char in parts[0]:
        if char.isdigit():
            digits += 1
            if digits > 3:
                return 'No'
    if parts[1] not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'