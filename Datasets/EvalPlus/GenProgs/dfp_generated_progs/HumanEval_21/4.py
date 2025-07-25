from typing import List
def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_val = min(numbers)
    max_val = max(numbers)
    scale = 1 / (max_val - min_val)
    rescaled = [(x - min_val) * scale for x in numbers]
    return rescaled