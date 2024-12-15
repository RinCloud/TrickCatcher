def check_dict_case(dict):
    if len(dict) == 0:
        return False
    if dict[list(dict.keys())[0]].isupper():
        for key in dict:
            if not key.isupper():
                return False
        return True
    else:
        for key in dict:
            if not key.islower():
                return False
        return True