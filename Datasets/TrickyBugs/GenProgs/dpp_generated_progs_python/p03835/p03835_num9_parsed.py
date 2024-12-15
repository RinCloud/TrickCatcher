# Reading input from standard input
K, S = map(int, input().split())

# Counting the number of assignments of values to X, Y, and Z
count = 0
for x in range(K+1):
    for y in range(K+1):
        z = S - x - y
        if 0 <= z <= K:
            count += 1

# Printing the result
print(count)