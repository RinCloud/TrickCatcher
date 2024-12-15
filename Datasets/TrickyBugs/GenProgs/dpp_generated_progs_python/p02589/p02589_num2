# Given the index i and j, the condition for Limak to obtain one string from the other is that every character in S_i must be present in S_j.
# To find the answer, we can create a dictionary for each string, containing the count of characters in the string.
# Then, we iterate through all pairs of strings and check if every character in the first string is present in the second string.
# If this condition is satisfied, we increment the count of pairs.

# Read input values
N = int(input())
strings = []

# Populate the list of strings
for _ in range(N):
    strings.append(input())

# Initialize a dictionary to store the count of characters in each string
char_count = [{} for _ in range(N)]

# Populate the character count dictionary for each string
for i in range(N):
    for char in strings[i]:
        char_count[i][char] = char_count[i].get(char, 0) + 1

# Initialize the count of pairs to 0
pair_count = 0

# Iterate through all pairs of strings
for i in range(N):
    for j in range(i + 1, N):
        # Check if every character in the first string is present in the second string
        if all(char_count[i].get(char, 0) <= char_count[j].get(char, 0) for char in char_count[i]):
            pair_count += 1

# Print the count of pairs
print(pair_count)