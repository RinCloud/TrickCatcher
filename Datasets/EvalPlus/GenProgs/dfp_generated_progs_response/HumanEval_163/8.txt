def generate_integers(a, b):
    """
    Given two positive integers a and b, return the even digits between a
    and b, in ascending order.
    """
    even_digits = []
    for i in range(a, b+1):
        str_num = str(i)
        for char in str_num:
            if int(char) % 2 == 0:
                even_digits.append(int(char))
    return sorted(set(even_digits))