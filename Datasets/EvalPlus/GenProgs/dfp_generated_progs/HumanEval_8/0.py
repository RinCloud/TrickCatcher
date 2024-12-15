from typing import List, Tuple
def sum_product(numbers: List[int]) -> Tuple[int, int]:
    """
    Calculate the sum and product of all the integers in a list.
    Parameters:
    numbers (List[int]): A list of integers.
    Returns:
    Tuple[int, int]: A tuple consisting of the sum and product of the integers.
    """
    if len(numbers) == 0:
        return (0, 1)
    
    total_sum = sum(numbers)
    total_product = 1
    
    for num in numbers:
        total_product *= num
    
    return (total_sum, total_product)