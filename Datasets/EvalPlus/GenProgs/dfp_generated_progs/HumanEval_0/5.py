from typing import List
def has_close_elements(numbers: List[float], threshold: float) -> bool:
    """
    Check if in given list of numbers, are any two numbers closer to each other than given threshold.
    
    Args:
    numbers (List[float]): List of numbers.
    threshold (float): Threshold value.
    
    Returns:
    bool: True if any two numbers are closer than threshold, False otherwise.
    """
    for i in range(len(numbers)):
        for j in range(i+1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False