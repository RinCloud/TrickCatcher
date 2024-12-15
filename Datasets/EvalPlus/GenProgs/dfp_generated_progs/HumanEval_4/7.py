def mean_absolute_deviation(numbers):
    """
    Calculates the Mean Absolute Deviation (MAD) of a given list of numbers.
    Parameters:
    numbers (list): List of numbers.
    Returns:
    float: Mean Absolute Deviation.
    Example:
    >>> mean_absolute_deviation([1.0, 2.0, 3.0, 4.0])
    1.0
    """
    mean = sum(numbers) / len(numbers)
    deviation = []
    for number in numbers:
        deviation.append(abs(number - mean))
    return sum(deviation) / len(deviation)