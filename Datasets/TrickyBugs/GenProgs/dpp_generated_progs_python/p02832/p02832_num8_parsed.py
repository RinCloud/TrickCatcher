# Get the input
N = int(input())
bricks = list(map(int, input().split()))

# Initialize a counter to keep track of the number of bricks that need to be broken
count = 0

# Iterate over each brick and check if it satisfies Snuke's desire
for i in range(N):
    # If the current brick does not have the desired integer, increment the count
    if bricks[i] != i + 1:
        count += 1

# If the count is equal to or greater than N, Snuke's desire is unsatisfiable, so print -1
if count >= N:
    print(-1)
else:
    print(count)