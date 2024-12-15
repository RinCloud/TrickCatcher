def circular_shift(x, shift):
    """
    Circular shift the digits of the integer x, shift the digits right by shift
    and return the result as a string.
    If shift > number of digits, return digits reversed.
    Parameters:
    x (int): The integer to be shifted.
    shift (int): The number of places to shift the digits.
    Returns:
    str: The resulting shifted digits.
    Examples:
    >>> circular_shift(12, 1)
    "21"
    >>> circular_shift(12, 2)
    "12"
    """
    digits = list(str(x))
    num_digits = len(digits)
    # If shift > number of digits, return digits reversed
    if shift > num_digits:
        return ''.join(digits[::-1])
    # Shift the digits right by shift
    shifted_digits = digits[num_digits - shift:] + digits[:num_digits - shift]
    return ''.join(shifted_digits)