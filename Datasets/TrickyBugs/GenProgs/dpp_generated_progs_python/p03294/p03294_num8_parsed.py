from typing import List

def maximum_f(n: int, a: List[int]) -> int:
    max_f = 0
    for m in range(max(a)):
        f = sum(m % ai for ai in a)
        max_f = max(max_f, f)
    return max_f

# Read input
n = int(input())
a = list(map(int, input().split()))

# Calculate and print the maximum value of f
print(maximum_f(n, a))