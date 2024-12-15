def replace_chars(s, i):
    if s[i] == 'A':
        s = s[:i] + 'BB' + s[i+1:]
    else:
        s = s[:i] + 'AA' + s[i+1:]
    return s

def delete_substring(s, i, j):
    return s[:i] + s[j+1:]

def can_transform(s, t, a, b, c, d):
    # Check if the lengths of the substrings are not equal
    if b - a != d - c:
        return False
    
    # Iterate over the substring in s
    for i in range(a, b+1):
        # Replace the characters in the substring
        s = replace_chars(s, i)
        
    # Iterate over the substring in t
    for i in range(c, d+1):
        # Replace the characters in the substring
        t = replace_chars(t, i)
        
    # Delete the substrings in s and t
    s = delete_substring(s, a, b)
    t = delete_substring(t, c, d)
    
    return s == t

# Read input
S = input()
T = input()
q = int(input())
queries = []
for _ in range(q):
    a, b, c, d = map(int, input().split())
    queries.append((a, b, c, d))

# Process queries
for query in queries:
    a, b, c, d = query
    if can_transform(S, T, a-1, b-1, c-1, d-1):
        print("YES")
    else:
        print("NO")