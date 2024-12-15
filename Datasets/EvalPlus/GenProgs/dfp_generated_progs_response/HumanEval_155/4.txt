def even_odd_count(num):
    """
    Given an integer, return a tuple that has the number of even and odd digits respectively.
    
    Args:
    num -- an integer
    
    Returns:
    tuple -- a tuple containing the number of even and odd digits in the given integer
    
    Examples:
    even_odd_count(-12) ==> (1, 1)  # -12 has one even digit (2) and one odd digit (1)
    even_odd_count(123) ==> (1, 2)  # 123 has one even digit (2) and two odd digits (1, 3)
    """
    even_count = 0
    odd_count = 0
    for digit in str(abs(num)):
        if int(digit) % 2 == 0:
            even_count += 1
        else:
            odd_count += 1
    return (even_count, odd_count)