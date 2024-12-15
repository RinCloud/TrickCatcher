import math
N, M = map(int, input().split())

# If N or M is 0, then there are no ways to choose two balls
if N == 0 or M == 0:
    print(0)
else:
    # Count the ways to choose two even balls (N choose 2).
    # Count the ways to choose two odd balls (M choose 2).
    # Count the ways to choose one even ball and one odd ball (N * M).
    # Add them up to get the total count of ways to choose two balls.
    total_count = math.comb(N, 2) + math.comb(M, 2) + N * M
    print(total_count)