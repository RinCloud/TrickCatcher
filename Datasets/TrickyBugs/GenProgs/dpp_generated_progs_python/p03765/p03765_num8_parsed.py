# Implementation

def perform_operations(s):
    t = s.replace('A', 'B').replace('B', 'AA')
    return t

def check_substring(s, t, a, b, c, d):
    s_substring = s[a-1:b]
    t_substring = t[c-1:d]
    return s_substring == t_substring

# Read input
s = input()
t = input()
q = int(input())

# Preprocess s
while True:
    new_s = perform_operations(s)
    if new_s == s:
        break
    s = new_s

# Process queries
for _ in range(q):
    a, b, c, d = map(int, input().split())
    if check_substring(s, t, a, b, c, d):
        print("YES")
    else:
        print("NO")