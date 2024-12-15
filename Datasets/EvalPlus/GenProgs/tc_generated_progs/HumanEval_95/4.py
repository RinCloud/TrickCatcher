def check_dict_case(dict):
    if len(dict) == 0:
        return False
    if all(key.isupper() for key in dict.keys()):
        return True
    elif all(key.islower() for key in dict.keys()):
        return True
    else:
        return False