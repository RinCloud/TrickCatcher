def check_if_last_char_is_a_letter(txt):
    if txt == "":
        return False
    else:
        last_char = txt[-1]
        if last_char.isalpha():
            if last_char not in txt[:-1] and last_char != " ":
                return True
        return False