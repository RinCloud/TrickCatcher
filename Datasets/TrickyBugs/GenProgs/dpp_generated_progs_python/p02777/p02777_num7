# Program

from typing import List

def find_remaining_balls(S: str, T: str, A: int, B: int, U: str) -> List[int]:
    s_count = A if U == S else A - 1
    t_count = B if U == T else B - 1
    return [s_count, t_count]

# Get inputs
S, T = input().split()
A, B = map(int, input().split())
U = input().strip()

# Get the counts of remaining balls for S and T
result = find_remaining_balls(S, T, A, B, U)

# Print the result
print("{} {}".format(result[0], result[1]))