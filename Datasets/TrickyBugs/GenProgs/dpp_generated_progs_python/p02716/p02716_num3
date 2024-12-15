from typing import List

def max_sum_chosen_elements(N: int, A: List[int]) -> int:
    ans = 0
    
    # Choosing the first element
    ans += A[0]
    
    # Choosing the maximum of alternate elements
    for i in range(2, N, 2):
        ans += max(A[i], 0)
    
    return ans

N = int(input())
A = list(map(int, input().split()))

print(max_sum_chosen_elements(N, A))