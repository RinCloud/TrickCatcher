# Taking input from user
n, k = map(int, input().split())

# Calculating the minimum possible difference
min_diff = n % k

# Printing the minimum possible difference
print(min_diff)