def below_threshold(l: list, t: int):
    """Return True if all numbers in the list l are below threshold t."""
    for num in l:
        if num >= t:
            return False
    return True