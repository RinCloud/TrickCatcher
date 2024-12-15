def find_min_i(s, t):
    # Length of s and t
    len_s = len(s)
    len_t = len(t)

    # If t is longer than s, it can never be a subsequence of s
    if len_t > len_s:
        return -1

    # Find the least common multiple (LCM) of len_s and len_t
    lcm = (len_s * len_t) // math.gcd(len_s, len_t)

    # Check if s can be repeated to form a string with a length that is a multiple of len_t
    if s * (lcm // len_s) != t * (lcm // len_t):
        return -1

    # Calculate the number of repetitions of s needed to form a string with a length proportional to len_t
    num_repetitions = lcm // len_s

    # Iterate from 1 to num_repetitions
    for i in range(1, num_repetitions + 1):
        # Construct a string with i repetitions of s
        repeated_s = s * i

        # Check if t is a subsequence of the constructed string
        if is_subsequence(repeated_s, t):
            return i

    return -1

def is_subsequence(s, t):
    # Two pointers to traverse s and t
    i, j = 0, 0

    # Traverse both s and t
    while i < len(s) and j < len(t):
        # If the characters match, move both pointers forward
        if s[i] == t[j]:
            i += 1
            j += 1
        # If the characters don't match, move only the pointer in s
        else:
            i += 1

    # If all characters in t have been matched, it is a subsequence of s
    if j == len(t):
        return True
    else:
        return False


import math

# Read input
s = input()
t = input()

# Find the minimum i satisfying the condition
min_i = find_min_i(s, t)

# Print the result
print(min_i)
