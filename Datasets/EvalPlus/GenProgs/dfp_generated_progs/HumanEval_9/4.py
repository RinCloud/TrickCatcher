from typing import List
def rolling_max(numbers: List[int]) -> List[int]:
    max_list = []
    current_max = None
    
    for num in numbers:
        if current_max is None or num > current_max:
            current_max = num
        max_list.append(current_max)
    
    return max_list