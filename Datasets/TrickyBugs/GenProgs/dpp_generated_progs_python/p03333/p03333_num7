# Start of the program

# Read the value of N
N = int(input())

# Initialize the variables
segments = []
left_sum = 0
right_sum = 0

# Read the segments and calculate the sum of left and right coordinates
for _ in range(N):
    L, R = map(int, input().split())
    segments.append((L, R))
    left_sum += L
    right_sum += R

# Calculate the total distance traveled by Takahashi
# The maximum value will be obtained by choosing the rightmost segment
# The minimum value will be obtained by choosing the leftmost segment
K = max(right_sum - left_sum, left_sum - right_sum)

# Print the total distance traveled by Takahashi
print(K)

# End of the program