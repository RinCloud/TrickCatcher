def is_subsequence(s1, s2):
    n1 = len(s1)
    n2 = len(s2)
    i = 0
    j = 0
    while i < n1 and j < n2:
        if s1[i] == s2[j]:
            i += 1
        j += 1
    return i == n1

def find_smallest_string(A):
    ans = 'a'
    while True:
        if not is_subsequence(ans, A):
            break
        ans = chr(ord(ans) + 1)
    return ans

# Read input
A = input()

# Find the smallest string
result = find_smallest_string(A)

# Print the result
print(result)
