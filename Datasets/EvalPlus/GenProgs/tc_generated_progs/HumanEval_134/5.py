def check_if_last_char_is_a_letter(txt):
    if len(txt) == 0:
        return False
    else:
        last_char = txt[-1]
        if not last_char.isalpha():
            return False
        words = txt.split()
        last_word = words[-1]
        return len(last_word) == 1 or not last_word[-1].isalpha()