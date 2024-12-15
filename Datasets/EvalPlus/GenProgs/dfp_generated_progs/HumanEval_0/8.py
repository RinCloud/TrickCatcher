def has_close_elements(numbers: List[float], threshold: float) -> bool:
    """
    Check if in given list of numbers, are any two numbers closer to each other than
    given threshold.
    Parameters:
    numbers (List[float]): A list of floating-point numbers.
    threshold (float): A floating-point number representing the maximum allowed difference between two numbers.
    Returns:
    bool: True if there are any two numbers closer to each other than the threshold, False otherwise.
    """
    for i in range(len(numbers)):
        for j in range(i+1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False