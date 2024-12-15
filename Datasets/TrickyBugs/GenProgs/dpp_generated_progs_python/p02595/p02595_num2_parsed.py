import math

# read input values
N, D = map(int, input().split())

# initialize count to 0
count = 0

# loop through each point and check if distance from origin is at most D
for _ in range(N):
    X, Y = map(int, input().split())
    distance = math.sqrt(X**2 + Y**2)
    if distance <= D:
        count += 1

# print the result
print(count)