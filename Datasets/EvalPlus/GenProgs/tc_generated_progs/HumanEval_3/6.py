from typing import List
def below_zero(operations: List[int]) -> bool:
    if not operations:
        return False
    
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    
    return False