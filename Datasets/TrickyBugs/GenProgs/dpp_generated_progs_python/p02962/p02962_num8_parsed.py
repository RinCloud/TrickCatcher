def max_i(s, t):
    # Find the common prefix of s and t
    i = 0
    while i < min(len(s), len(t)) and s[i] == t[i]:
        i += 1

    # Check if t is a substring of s
    if t[i:] in s:
        return -1

    # Find the maximum value of i
    max_i = 0
    for j in range(len(s)):
        if s[j] == t[0]:
            k = j
            count = 0
            while k < len(s) and s[k] == t[count % len(t)]:
                count += 1
                k += 1
                if count % len(t) == 0:
                    max_i = max(max_i, count // len(t))

    return max_i

# Read input from standard input
s = input().strip()
t = input().strip()

# Call the max_i function and print the result
print(max_i(s, t))
