def check_if_last_char_is_a_letter(txt):
    if txt == "":
        return False
    else:
        words = txt.split()
        last_word = words[-1]
        last_char = last_word[-1]
        return last_char.isalpha() and not last_word.isalpha()