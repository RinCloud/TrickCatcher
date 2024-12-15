def check_dict_case(my_dict):
    if len(my_dict) == 0:
        return False
    lowercase_keys = [key for key in my_dict.keys() if isinstance(key, str) and key.islower()]
    uppercase_keys = [key for key in my_dict.keys() if isinstance(key, str) and key.isupper()]
    
    if len(lowercase_keys) == 0 or len(uppercase_keys) == 0:
        return True
    else:
        return False