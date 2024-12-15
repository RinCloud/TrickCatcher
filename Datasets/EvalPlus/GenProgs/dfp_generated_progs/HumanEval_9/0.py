from typing import List
def rolling_max(numbers: List[int]) -> List[int]:
    rolling_max_list = []
    current_max = numbers[0]
    rolling_max_list.append(current_max)
    for num in numbers[1:]:
        if num > current_max:
            current_max = num
        rolling_max_list.append(current_max)
    return rolling_max_list