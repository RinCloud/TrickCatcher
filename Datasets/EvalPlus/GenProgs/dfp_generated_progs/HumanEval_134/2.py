def check_if_last_char_is_a_letter(txt):
    if len(txt) == 0:
        return False
    last_char = txt[-1]
    if not last_char.isalpha():
        return False
    if len(txt.split()) > 1:
        words = txt.split()[:-1]
        new_txt = " ".join(words)
        if new_txt[-1].isalpha():
            return False
    return True