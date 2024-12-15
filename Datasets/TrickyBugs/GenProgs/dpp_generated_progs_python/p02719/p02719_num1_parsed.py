# Given the initial value N and the operation to replace N with the absolute difference of N and K, we can solve this problem using a simple while loop.

# Read the input values
N, K = map(int, input().split())

# Iterate until N becomes smaller than K
while N >= K:
    # Calculate the absolute difference between N and K
    diff = abs(N - K)

    # Replace N with the difference
    N = diff

# Print the minimum possible value of N
print(N)