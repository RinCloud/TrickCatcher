# Program:

def reverse_concatenate(s):
    t = s[::-1]
    u = s + t
    return u

def find_smallest_string(s, k):
    n = len(s)
    u = reverse_concatenate(s)
    
    smallest_string = s
    for i in range(k):
        substring = u[i:i+n]
        smallest_string = min(smallest_string, substring)
    
    return smallest_string

# Reading input
n, k = map(int, input().split())
s = input()

# Finding lexicographically smallest possible string
result = find_smallest_string(s, k)

# Printing the result
print(result)