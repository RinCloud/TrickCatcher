# Read the input value for K
K = int(input())

# Calculate the number of even numbers between 1 and K (inclusive)
num_even = K // 2

# Calculate the number of odd numbers between 1 and K (inclusive)
num_odd = (K + 1) // 2

# Calculate the number of ways to choose a pair of an even number and an odd number
num_ways = num_even * num_odd

# Print the result
print(num_ways)