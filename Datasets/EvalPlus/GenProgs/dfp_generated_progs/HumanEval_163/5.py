def generate_integers(a, b):
    # Convert a and b to strings for easy manipulation of digits
    a_str = str(a)
    b_str = str(b)
    
    # Get the even digits between a and b
    even_digits = []
    for digit in range(int(a_str[-1]), int(b_str[-1]) + 1):
        if digit % 2 == 0:
            even_digits.append(digit)
    
    return even_digits