def check_dict_case(dict):
    if len(dict)==0:
        return False
    upper_case = False
    lower_case = False
    for key in dict:
        if not isinstance(key,str):
            return False
        if key.islower():
            lower_case = True
        elif key.isupper():
            upper_case = True
        else:
            return False
    if (upper_case and not lower_case) or (lower_case and not upper_case):
        return True
    else:
        return False