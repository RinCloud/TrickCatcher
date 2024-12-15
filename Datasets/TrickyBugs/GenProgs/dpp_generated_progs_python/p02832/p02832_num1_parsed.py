N = int(input())
bricks = list(map(int, input().split()))

# Count the occurrences of each integer on the bricks
occurrences = {}
for i in range(N):
    if bricks[i] not in occurrences:
        occurrences[bricks[i]] = 1
    else:
        occurrences[bricks[i]] += 1

# Check if Snuke's desire is unsatisfiable
if occurrences.get(1) is None:
    print(-1)
else:
    # Count the number of bricks that need to be broken
    count = N - occurrences[1] + 1
    print(count)