import sys

def longest_subsequence(S, K):
    # Initialize the dictionary to store the frequencies of each subsequence
    freq = {}
    
    # Iterate through each string in S
    for s in S:
        # Initialize a bitmask to keep track of the subsequence
        bitmask = 0
        
        # Iterate through each character in the string
        for i, c in enumerate(s):
            # If the character is '1', set the corresponding bit in the bitmask to 1
            if c == '1':
                bitmask |= (1 << i)
        
        # Update the frequency of the subsequence in the dictionary
        if bitmask in freq:
            freq[bitmask] += 1
        else:
            freq[bitmask] = 1
    
    # Initialize the maximum frequency to 0
    max_freq = 0
    
    # Initialize the result string to an empty string
    result = ""
    
    # Iterate through each subsequence in the dictionary
    for bitmask in freq:
        # If the frequency of the subsequence is greater than or equal to K
        if freq[bitmask] >= K:
            # If the length of the subsequence is greater than the current maximum frequency
            if bin(bitmask).count('1') > max_freq:
                # Update the maximum frequency
                max_freq = bin(bitmask).count('1')
                # Update the result string to the lexicographically smallest subsequence
                result = bin(bitmask)[2:].zfill(len(S[0]))
    
    # Print the result string
    print(result)

# Read the input N and K from the standard input
N, K = map(int, sys.stdin.readline().strip().split())

# Read the strings from the standard input
S = [sys.stdin.readline().strip() for _ in range(N+1)]

# Call the longest_subsequence function
longest_subsequence(S, K)