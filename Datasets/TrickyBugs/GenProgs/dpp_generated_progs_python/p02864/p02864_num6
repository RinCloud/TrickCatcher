from typing import List

def min_operations(N: int, K: int, H: List[int]) -> int:
    if K >= N:
        return 0
    
    operations = 0

    for i in range(N):
        if i < K:
            continue
        
        operations += H[i]
    
    return operations

N, K = map(int, input().split())
H = list(map(int, input().split()))

result = min_operations(N, K, H)
print(result)