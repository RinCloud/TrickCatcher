def is_nested(string):
    if '[[' not in string:
        return False
    start = string.find('[[')
    end = string.find(']]', start)
    if end != -1:
        return True
    return False