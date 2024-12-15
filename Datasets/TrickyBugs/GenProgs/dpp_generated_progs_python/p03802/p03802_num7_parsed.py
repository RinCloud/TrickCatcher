# reading input
N = int(input())
flags = [tuple(map(int, input().split())) for _ in range(N)]

# sort flags based on their x-coordinate
flags.sort()

# calculate the maximum possible value of d
d = 0
for i in range(N-1):
    d = max(d, flags[i+1][1] - flags[i][1])

# printing the result
print(d)