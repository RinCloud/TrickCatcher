# I will make the following fixes:

# 1. I will initialize the `l` variable as an empty string before the for loop.
# 2. I will sort the strings `s` in descending order of their lengths before the for loop.
# 3. I will change the range of the for loop to `range(26)` instead of `range(26)` to loop through all lowercase English letters (`a` - `z`).
# 4. I will change the condition of the second inner for loop from `range(t)` to `range(n)` to correctly append the characters to `l`.
# 5. I will sort the string `l` lexicographically before printing it.

# I will explain the needed fixes to the code.

# FIXED CODE:
n = int(input())
s = []
for i in range(n):
    s.append(list(input()))

s.sort(key=len, reverse=True)

l = ''
for i in range(26):
    t = n + 2
    for j in range(n):
        t = min(t, s[j].count(chr(97 + i)))
    for j in range(n):
        l += chr(97 + i) * t

l = ''.join(sorted(l))

print(l)