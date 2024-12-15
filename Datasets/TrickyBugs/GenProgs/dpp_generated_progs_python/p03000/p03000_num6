# Reading input
n, x = map(int, input().split())
l = list(map(int, input().split()))

# Initializing variables
count = 1
coord = 0

# Iterating through bounces
for length in l:
    coord += length
    if coord <= x:
        count += 1
    else:
        break

# Printing the number of bounces
print(count)