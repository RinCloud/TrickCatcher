from typing import List, Tuple
def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    min_difference = float('inf')
    closest_numbers = ()
    
    for i in range(len(numbers)-1):
        difference = abs(numbers[i] - numbers[i+1])
        if difference < min_difference:
            min_difference = difference
            closest_numbers = (numbers[i], numbers[i+1])
    
    return closest_numbers