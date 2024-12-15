def check_dict_case(dict):
    if len(dict) == 0:
        return False
    first_key = list(dict.keys())[0]
    if first_key.isupper():
        for key in dict:
            if not key.isupper():
                return False
        return True
    elif first_key.islower():
        for key in dict:
            if not key.islower():
                return False
        return True
    else:
        return False