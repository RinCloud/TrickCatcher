from collections import defaultdict

# Read the value of N
N = int(input())

# Create a dictionary to store the count of each string
count_dict = defaultdict(int)

# Read the string values and update the count
for _ in range(N):
    string = input()
    count_dict[string] += 1

# Find the maximum count
max_count = max(count_dict.values())

# Create a list to store the strings with maximum count
max_strings = []
for string, count in count_dict.items():
    if count == max_count:
        max_strings.append(string)

# Sort the list lexicographically and print the strings
max_strings.sort()
for string in max_strings:
    print(string)