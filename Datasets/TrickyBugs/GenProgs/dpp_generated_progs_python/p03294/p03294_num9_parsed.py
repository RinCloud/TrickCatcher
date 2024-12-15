from typing import List

def find_maximum_f(N: int, a: List[int]) -> int:
    max_f = 0
    for m in range(max(a)):
        f = sum(m % ai for ai in a)
        max_f = max(max_f, f)
    return max_f

# Read input
N = int(input())
a = list(map(int, input().split()))

# Find maximum value of f
maximum_f = find_maximum_f(N, a)

# Print the result
print(maximum_f)