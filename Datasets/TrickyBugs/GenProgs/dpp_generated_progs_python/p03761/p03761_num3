import sys

def longest_common_prefix(strings):
    if not strings:
        return ""
    
    min_length = min(len(s) for s in strings)
    result = ""
    for i in range(min_length):
        c = strings[0][i]
        if all(s[i] == c for s in strings):
            result += c
        else:
            break
    
    return result

# Read input
n = int(sys.stdin.readline().strip())
strings = [sys.stdin.readline().strip() for _ in range(n)]

# Find the longest common prefix
prefix = longest_common_prefix(strings)

# Print the lexicographically smallest longest common prefix
print(prefix)