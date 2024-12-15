def truncate_number(number: float) -> float:
    """Return the decimal part of a positive floating point number.
    Args:
    number (float): The input number.
    Returns:
    float: The decimal part of the number.
    Examples:
    >>> truncate_number(3.5)
    0.5
    >>> truncate_number(0.25)
    0.25
    """
    return number % 1.0