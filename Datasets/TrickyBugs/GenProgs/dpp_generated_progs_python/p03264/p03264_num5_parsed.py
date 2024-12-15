# Getting input from standard input
K = int(input())

# Counting the number of even and odd numbers between 1 and K (inclusive)
even_count = K // 2
odd_count = (K + 1) // 2

# Calculating the number of ways to choose a pair of an even number and an odd number
num_ways = even_count * odd_count

# Printing the result
print(num_ways)