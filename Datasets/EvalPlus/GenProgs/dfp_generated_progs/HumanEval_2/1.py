def truncate_number(number: float) -> float:
    """Given a positive floating point number, return the decimal part of the number."""
    return number - int(number)