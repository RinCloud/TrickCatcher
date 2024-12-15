from string import ascii_lowercase

def is_subsequence(sub, s):
    i, j = 0, 0
    while i < len(sub) and j < len(s):
        if sub[i] == s[j]:
            i += 1
        j += 1
    return i == len(sub)

def find_shortest_string(s):
    n = len(s)
    ans = list(ascii_lowercase)
    for i in range(n + 1):
        for ch in ascii_lowercase:
            t = s[:i] + ch + s[i:]
            if not is_subsequence(t, s):
                if len(t) < len(ans) or (len(t) == len(ans) and t < ans):
                    ans = t
    return ans

A = input()
print(find_shortest_string(A))