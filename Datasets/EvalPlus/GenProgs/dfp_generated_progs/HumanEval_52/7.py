def below_threshold(l: list, t: int):
    """Return True if all numbers in the list l are below threshold t."""
    return all(num < t for num in l)