n = int(input())
a = list(map(int, input().split()))

# Sort the list
a.sort()

# Calculate the median of the list
median = a[n // 2]

# Calculate the minimum possible sadness
sadness = sum(abs(x - (median + i)) for i, x in enumerate(a))

# Print the result
print(sadness)