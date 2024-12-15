from itertools import accumulate

def min_diff_chars(N, A):
    # Calculate the cumulative sum of the string lengths
    cumulative_sum = list(accumulate(A))
    
    # Initialize a set to store the unique characters
    unique_chars = set()
    
    # Iterate through the cumulative sum
    for i in range(N-1):
        # Calculate the length of the substring from i+1 to N
        substring_length = cumulative_sum[-1] - cumulative_sum[i]
        
        # Add the first substring_length characters to the set
        unique_chars.update(chr(ord('a') + j) for j in range(substring_length))
    
    # Return the number of unique characters
    return len(unique_chars)

# Read the input values
N = int(input())
A = list(map(int, input().split()))

# Call the function and print the result
print(min_diff_chars(N, A))