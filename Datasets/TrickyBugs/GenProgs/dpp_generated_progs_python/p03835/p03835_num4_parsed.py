K, S = map(int, input().split())

count = 0

# Loop through all possible values of X, Y, and Z
for x in range(K+1):
    for y in range(K+1):
        for z in range(K+1):
            # Check if the sum of X, Y, and Z is equal to S
            if x + y + z == S:
                count += 1

print(count)
