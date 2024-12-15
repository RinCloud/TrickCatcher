# Read the input values
N = int(input())
A = list(map(int, input().split()))

# Calculate the minimum possible number of different characters
min_chars = min(A)

# Print the result
print(min_chars)