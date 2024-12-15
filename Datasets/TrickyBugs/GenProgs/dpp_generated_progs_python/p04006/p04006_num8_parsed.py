# Reading input from Standard Input
n, x = map(int, input().split())
a = list(map(int, input().split()))

# Find the minimum time
min_time = sum(a)

# Iterate over each color
for i in range(1, n):
    # Update the time if catching the slime is faster than casting the spell
    min_time = min(min_time, a[i-1] + x)

# Print the minimum time
print(min_time)