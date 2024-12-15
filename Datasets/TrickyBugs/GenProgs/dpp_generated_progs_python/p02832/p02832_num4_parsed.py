# Taking input
n = int(input())
a = list(map(int, input().split()))

# Calculating the minimum number of bricks to be broken
valid = True
broken = 0
expected = 1
for brick in a:
    if brick == expected:
        expected += 1
    else:
        broken += 1
    if expected == n + 1:
        break
    if expected > brick:
        valid = False

# Printing the result
if valid:
    print(broken)
else:
    print(-1)