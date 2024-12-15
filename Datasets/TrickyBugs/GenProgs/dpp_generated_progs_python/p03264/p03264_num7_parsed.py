import sys

def count_pairs(K):
    even_count = (K // 2) + (K % 2)
    odd_count = K // 2
    return even_count * odd_count

# Read input from stdin
K = int(sys.stdin.readline().strip())

# Calculate and print the number of ways to choose a pair
print(count_pairs(K))