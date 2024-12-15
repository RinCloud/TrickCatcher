def unique_digits(x):
    """
    Given a list of positive integers x.
    Returns a sorted list of all elements that don't contain any even digit.
    
    Args:
    x (List[int]): A list of positive integers
    
    Returns:
    List[int]: A sorted list of positive integers without any even digit
    """
    result = []
    for num in x:
        is_unique = True
        for digit in str(num):
            if int(digit) % 2 == 0:
                is_unique = False
                break
        if is_unique:
            result.append(num)
    
    return sorted(result)