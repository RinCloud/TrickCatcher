# Starting of code
N = int(input())  # Reading the value of N
votes = {}  # Dictionary to store the count of each string

# Loop to read the strings and count their occurrences
for _ in range(N):
    vote = input()  # Reading a vote
    if vote in votes:
        votes[vote] += 1  # Incrementing the count if string exists in the dictionary
    else:
        votes[vote] = 1  # Else, adding the string to the dictionary with count 1

max_count = max(votes.values())  # Getting the maximum count from the dictionary

# List to store the strings with maximum count
max_strings = [string for string, count in votes.items() if count == max_count]

# Sorting the strings in lexicographical order
max_strings.sort()

# Printing the strings in lexicographical order
for string in max_strings:
    print(string)
# End of code