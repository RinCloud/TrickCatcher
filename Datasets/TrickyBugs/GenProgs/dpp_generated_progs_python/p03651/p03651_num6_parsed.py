from typing import List

def snuke_possible(n: int, k: int, a: List[int]) -> str:
    # Check if K is already present in the balls
    if k in a:
        return 'POSSIBLE'
    
    # Check if it is possible to reach K using the operations
    max_ai = max(a)
    if k > max_ai:
        return 'IMPOSSIBLE'
    
    # Check if the sum of all integers is greater than or equal to K
    sum_ai = sum(a)
    if k > sum_ai:
        return 'IMPOSSIBLE'
    
    # Check if the sum of all integers and K is odd, and if the maximum integer is odd
    if (sum_ai + k) % 2 != 0 or max_ai % 2 != 0:
        return 'IMPOSSIBLE'
    
    return 'POSSIBLE'

# Read the input from standard input
n, k = map(int, input().split())
a = list(map(int, input().split()))

# Call the function and print the result
print(snuke_possible(n, k, a))