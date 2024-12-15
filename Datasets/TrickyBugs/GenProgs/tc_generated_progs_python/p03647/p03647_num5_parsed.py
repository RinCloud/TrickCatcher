# Read input
n, m = map(int, input().split())

arr01 = []
arr02 = []

# Store the islands connected to Island 1 and N
for _ in range(m):
    a, b = map(int, input().split())
    if a == 1:
        arr01.append(b)
    if b == n:
        arr02.append(a)

# Check if there is a possible pair of boat services
possible = False
for island in arr01:
    if island in arr02:
        possible = True
        break

# Print the result
print("POSSIBLE" if possible else "IMPOSSIBLE")
