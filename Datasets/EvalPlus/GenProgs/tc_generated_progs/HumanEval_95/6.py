def check_dict_case(dict):
    if len(dict) == 0:
        return False
    keys = dict.keys()
    if all(k.islower() for k in keys) or all(k.isupper() for k in keys):
        return True
    else:
        return False