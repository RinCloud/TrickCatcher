# Read input
N = int(input())
A = list(map(int, input().split()))

# Calculate the total sum of stones
total_sum = sum(A)

# Check if Takahashi can guarantee his win
if N == 2:
    if A[0] < A[1]:
        # Takahashi can guarantee his win by moving at least 0 and at most (A[0] - 1) stones from the 1st pile to the 2nd pile
        print(A[0])
    else:
        # Takahashi cannot guarantee his win
        print(-1)
else:
    # Takahashi cannot guarantee his win
    print(-1)