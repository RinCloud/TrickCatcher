# Read input from standard input
n = int(input())
s = input()

# Initialize a set to store the unique letters in the string
unique_letters = set()

# Iterate over the string and add each letter to the set
for letter in s:
    unique_letters.add(letter)

# Initialize a variable to store the maximum number of different letters
max_diff_letters = 0

# Iterate over all possible positions to cut the string
for i in range(1, n):
    # Split the string at position i
    x = set(s[:i])
    y = set(s[i:])
    
    # Compute the number of different letters in both X and Y
    diff_letters = len(x.intersection(y))
    
    # Update the maximum number of different letters
    max_diff_letters = max(max_diff_letters, diff_letters)

# Print the largest possible number of different letters
print(max_diff_letters)