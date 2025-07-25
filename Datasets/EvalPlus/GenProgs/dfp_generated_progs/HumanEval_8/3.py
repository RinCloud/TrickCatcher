from typing import List, Tuple
def sum_product(numbers: List[int]) -> Tuple[int, int]:
    """For a given list of integers, return a tuple consisting of a sum and a product of all the integers in a list.
    
    Args:
    numbers (List[int]): list of integers
    
    Returns:
    Tuple[int, int]: tuple consisting of the sum and product of all the integers in the list
    
    """
    if not numbers:
        return (0, 1)
    sum_numbers = sum(numbers)
    product_numbers = 1
    for number in numbers:
        product_numbers *= number
    return (sum_numbers, product_numbers)