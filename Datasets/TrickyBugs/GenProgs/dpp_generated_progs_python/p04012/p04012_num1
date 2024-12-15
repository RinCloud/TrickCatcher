# Program:

from collections import Counter

def is_beautiful(w):
    # Count the frequency of each letter in the string
    freq = Counter(w)
    
    # Check if each letter occurs an even number of times
    for letter in freq:
        if freq[letter] % 2 != 0:
            return "No"
    
    return "Yes"

# Read the input
w = input().strip()

# Check if w is beautiful
result = is_beautiful(w)

# Print the result
print(result)