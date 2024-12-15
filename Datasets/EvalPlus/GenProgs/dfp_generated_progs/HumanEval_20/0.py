from typing import List, Tuple
def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    closest = float('inf')
    closest_pair = None
    
    for i in range(len(numbers)-1):
        for j in range(i+1, len(numbers)):
            if abs(numbers[i]-numbers[j]) < closest:
                closest = abs(numbers[i]-numbers[j])
                closest_pair = (numbers[i], numbers[j])
    
    return closest_pair