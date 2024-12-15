def check_if_last_char_is_a_letter(txt):
    if txt:
        last_char = txt[-1]
        if last_char.isalpha():
            if txt[-2] == ' ' or txt[-2] == txt[-2:].strip():
                return True
            else:
                return False
        else:
            return False
    else:
        return False