# Getting input values
N = int(input())
A = list(map(int, input().split()))

# Checking if the total sum is odd
if sum(A) % 2 != 0:
    print(-1)
else:
    # Sorting the piles in descending order
    A.sort(reverse=True)
    
    # Checking if the largest pile is more than half the total sum
    if A[0] > sum(A[1:]):
        print(-1)
    else:
        # Calculating the minimum number of stones to move
        min_stones = A[0] - sum(A[1:])
        print(min_stones)