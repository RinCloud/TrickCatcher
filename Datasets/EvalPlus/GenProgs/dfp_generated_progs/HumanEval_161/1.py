def solve(s):
    reversed_s = ""
    has_letter = False
    for char in s:
        if char.isalpha():
            has_letter = True
            if char.isupper():
                reversed_s += char.lower()
            else:
                reversed_s += char.upper()
        else:
            reversed_s += char
    if not has_letter:
        reversed_s = s[::-1]
    return reversed_s