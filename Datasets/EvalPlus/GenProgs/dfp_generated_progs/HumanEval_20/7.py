from typing import List, Tuple
def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    min_diff = abs(numbers[1] - numbers[0])
    closest_pair = (numbers[0], numbers[1])
    
    for i in range(len(numbers)):
        for j in range(i+1, len(numbers)):
            diff = abs(numbers[j] - numbers[i])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])
    
    return closest_pair