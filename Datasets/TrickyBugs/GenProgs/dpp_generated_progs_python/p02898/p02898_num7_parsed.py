# Taking input of N and K
N, K = map(int, input().split())

# Taking input of heights of friends
heights = list(map(int, input().split()))

# Counting the number of friends who can ride the roller coaster
count = 0
for height in heights:
    if height >= K:
        count += 1

# Printing the count
print(count)