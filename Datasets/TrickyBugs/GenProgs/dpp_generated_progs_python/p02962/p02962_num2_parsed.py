import sys

def compute_max_i(s, t):
    # Calculate the lengths of strings s and t
    len_s = len(s)
    len_t = len(t)

    # Initialize max_i to -1
    max_i = -1

    # Check if t is a substring of s
    if t in s:
        # Calculate the maximum number of copies of t that can be a substring of s
        max_i = len_s // len_t

    return max_i


# Read the input from standard input
s = sys.stdin.readline().strip()
t = sys.stdin.readline().strip()

# Compute the maximum value of i
max_i = compute_max_i(s, t)

# Print the result
print(max_i)