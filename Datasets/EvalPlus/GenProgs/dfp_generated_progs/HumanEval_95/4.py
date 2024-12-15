def check_dict_case(dict):
    if len(dict) == 0:
        return False
    keys = dict.keys()
    lower_case = all(key.islower() for key in keys)
    upper_case = all(key.isupper() for key in keys)
    return lower_case or upper_case