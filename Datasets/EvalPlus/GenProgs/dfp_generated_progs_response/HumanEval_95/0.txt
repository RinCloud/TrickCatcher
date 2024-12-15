def check_dict_case(dict):
    if len(dict) == 0:  # If the dictionary is empty, return False
        return False
    else:
        keys = list(dict.keys())  # Get a list of all the keys in the dictionary
        if all(key.islower() for key in keys):  # If all keys are in lower case, return True
            return True
        elif all(key.isupper() for key in keys):  # If all keys are in upper case, return True
            return True
        else:
            return False  # If neither of the conditions are true, return False