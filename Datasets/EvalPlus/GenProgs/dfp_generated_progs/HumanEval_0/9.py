from typing import List
def has_close_elements(numbers: List[float], threshold: float) -> bool:
    # iterate through each number
    for i in range(len(numbers)):
        # iterate through each number starting from the next number
        for j in range(i+1, len(numbers)):
            # check if the difference between the two numbers is less than the threshold
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    # if no two numbers satisfy the condition, return False
    return False