# Given input
A, B, C = map(int, input().split())

# Calculate the number of times Takahashi can hear the sound
times = min(B // A, C)

# Print the result
print(times)