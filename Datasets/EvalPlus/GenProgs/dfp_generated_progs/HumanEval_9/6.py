from typing import List
def rolling_max(numbers: List[int]) -> List[int]:
    """ Generate a list of rolling maximum element found until given moment in the sequence. """
    max_list = []
    
    for i in range(len(numbers)):
        max_list.append(max(numbers[:i+1]))
    
    return max_list