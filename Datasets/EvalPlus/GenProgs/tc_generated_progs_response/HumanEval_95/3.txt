def check_dict_case(dict):
    if len(dict) == 0:
        return False
    first_key = list(dict.keys())[0]
    if str(first_key).isupper():
        for key in dict:
            if not str(key).isupper():
                return False
        return True
    else:
        for key in dict:
            if not str(key).islower():
                return False
        return True