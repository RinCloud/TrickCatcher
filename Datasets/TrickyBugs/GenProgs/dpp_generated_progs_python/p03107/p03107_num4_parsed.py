# Read input from STDIN
S = input()

# Initialize a counter to keep track of the number of cubes removed
counter = 0

# Iterate through the string S
for i in range(len(S) - 1):
    # If the current cube is red (0) and the next cube is blue (1), remove them
    if S[i] == '0' and S[i+1] == '1':
        counter += 2

# Print the maximum number of cubes that can be removed
print(counter)
