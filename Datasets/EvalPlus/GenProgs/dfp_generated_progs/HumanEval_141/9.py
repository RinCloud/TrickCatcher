def file_name_check(file_name):
    import re
    
    if len(re.findall('\d', file_name)) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    name, extension = file_name.split('.')
    if not name or not re.match('[a-zA-Z]', name):
        return 'No'
    if extension not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'