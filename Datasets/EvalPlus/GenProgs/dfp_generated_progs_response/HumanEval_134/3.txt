def check_if_last_char_is_a_letter(txt):
    if len(txt) == 0:
        return False
    else:
        last_char = txt[-1]
        if last_char.isalpha() and not last_char.isspace() and txt[-2] == ' ':
            return True
        else:
            return False