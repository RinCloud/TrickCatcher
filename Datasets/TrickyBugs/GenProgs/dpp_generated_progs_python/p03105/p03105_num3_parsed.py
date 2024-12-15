import sys

# Read input from Standard Input
input_line = sys.stdin.readline().strip()

# Split input by spaces
A, B, C = map(int, input_line.split())

# Calculate the number of times Takahashi will hear the sound
num_times = min(B // A, C)

# Print the result
print(num_times)