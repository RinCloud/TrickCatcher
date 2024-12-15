# Taking input from the user
N, K = map(int, input().split())
heights = list(map(int, input().split()))

# Counting the number of friends who can ride the roller coaster
count = 0
for height in heights:
    if height >= K:
        count += 1

# Printing the result
print(count)