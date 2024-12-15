from typing import List

def minimum_bricks_to_break(N: int, bricks: List[int]) -> int:
    remaining_bricks = N
    target = 1
    bricks_to_break = 0

    for i in range(N):
        if bricks[i] == target:
            target += 1
        else:
            bricks_to_break += 1

        remaining_bricks -= 1

        if remaining_bricks == 0:
            break

    if target == 1:
        return 0
    elif target > 1 and target <= N:
        return bricks_to_break
    else:
        return -1

# Read input
N = int(input())
bricks = list(map(int, input().split()))

# Calculate and print the minimum number of bricks to break
print(minimum_bricks_to_break(N, bricks))