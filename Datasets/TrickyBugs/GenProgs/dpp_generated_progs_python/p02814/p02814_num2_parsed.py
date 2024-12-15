# Approach:
1. We will iterate through all the numbers between 1 and M (inclusive) and check if it is a semi-common multiple of A.
2. To check if a number x is a semi-common multiple of A, we will iterate through each number a_i in A and check if x = a_i * (p + 0.5) for some non-negative integer p.
3. To find p, we can subtract 0.5 from x and divide the result by a_i. If the result is an integer, then x is a semi-common multiple.
4. If x is a semi-common multiple for all numbers in A, we will increment a counter.
5. Finally, we will print the counter as the output.

# Implementation:

from typing import List

def find_semi_common_multiples(N: int, M: int, A: List[int]) -> int:
    count = 0
    for x in range(1, M+1):
        is_semi_common_multiple = True
        for a_i in A:
            p = (x - 0.5) / a_i
            if not p.is_integer():
                is_semi_common_multiple = False
                break
        if is_semi_common_multiple:
            count += 1
    return count

# Read input
N, M = map(int, input().split())
A = list(map(int, input().split()))

# Find number of semi-common multiples
num_semi_common_multiples = find_semi_common_multiples(N, M, A)

# Print the result
print(num_semi_common_multiples)