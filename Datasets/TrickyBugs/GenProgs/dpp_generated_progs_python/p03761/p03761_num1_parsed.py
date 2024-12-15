import sys

def find_longest_string(headlines):
    # Initialize a dictionary to count the frequency of each character
    char_counts = {}
    
    # Iterate through each headline
    for headline in headlines:
        # Iterate through each character in the headline
        for char in headline:
            # Count the frequency of each character
            if char in char_counts:
                char_counts[char] += 1
            else:
                char_counts[char] = 1
    
    # Initialize the longest string and its length
    longest_string = ""
    longest_length = 0
    
    # Iterate through the character counts
    for char, count in char_counts.items():
        # If the character appears in all headlines
        if count == len(headlines):
            # Add the character to the longest string
            longest_string += char
            
            # Update the length of the longest string
            longest_length += 1
    
    # If the longest string is empty, return an empty line
    if longest_length == 0:
        return ""
    
    # Return the lexicographically smallest string among the longest strings
    return ''.join(sorted(longest_string))

def main():
    # Read the input from standard input
    n = int(sys.stdin.readline())
    
    headlines = []
    for _ in range(n):
        headline = sys.stdin.readline().strip()
        headlines.append(headline)
    
    # Find the longest string that can be created
    longest_string = find_longest_string(headlines)
    
    # Print the longest string
    print(longest_string)

if __name__ == '__main__':
    main()