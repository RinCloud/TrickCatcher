def truncate_number(number: float) -> float:
    """ Given a positive floating point number, it can be decomposed into
    and integer part (largest integer smaller than given number) and decimals
    (leftover part always smaller than 1).
    Return the decimal part of the number.
    """
    # Convert number to string
    number_str = str(number)
    # Find the index of the decimal point
    index = number_str.index('.')
    # Extract the decimal part of the number
    decimal_part = float(number_str[index:])
    # Return the decimal part
    return decimal_part