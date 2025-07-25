from collections import Counter

def find_longest_string(n, strings):
    # Count the frequency of each character in each string
    character_counts = [Counter(string) for string in strings]
    
    # Initialize the result with the character counts from the first string
    result = character_counts[0]
    
    # Find the intersection of character counts from all strings
    for i in range(1, n):
        result &= character_counts[i]
    
    # Find the longest common substring based on the character counts
    longest_common_substring = ''
    for char, count in result.items():
        longest_common_substring += char * count
    
    # Sort the characters in the longest common substring lexicographically
    sorted_substring = ''.join(sorted(longest_common_substring))
    
    return sorted_substring

# Read the input
n = int(input())
strings = [input() for _ in range(n)]

# Find the longest string that can be created regardless of the headline
result = find_longest_string(n, strings)

# Print the result
print(result)
