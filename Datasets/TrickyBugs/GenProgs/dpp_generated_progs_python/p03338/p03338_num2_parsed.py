from collections import Counter

# Read the input
N = int(input())
S = input()

# Count the frequency of each letter in the string
letter_count = Counter(S)

# Initialize the maximum number of different letters to 0
max_diff_letters = 0

# Iterate through the possible cut positions
for i in range(1, N):
    # Count the number of different letters in X and Y
    num_diff_letters = len(set(S[:i]) & set(S[i:]))

    # Update the maximum number of different letters
    if num_diff_letters > max_diff_letters:
        max_diff_letters = num_diff_letters

# Print the maximum number of different letters
print(max_diff_letters)