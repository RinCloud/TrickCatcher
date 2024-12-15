def check_if_last_char_is_a_letter(txt):
    if len(txt) == 0:
        return False
    last_char = txt[-1]
    if not last_char.isalpha():
        return False
    if last_char == ' ':
        return False
    if txt[-2] != ' ':
        return False
    return True