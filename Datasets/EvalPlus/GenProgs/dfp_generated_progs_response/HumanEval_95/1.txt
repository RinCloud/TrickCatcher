def check_dict_case(dict):
    if not dict:
        return False
    keys = dict.keys()
    is_lower = all(key.islower() for key in keys)
    is_upper = all(key.isupper() for key in keys)
    return is_lower or is_upper