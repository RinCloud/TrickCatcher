s = input()
a = 0
for i in range(1, len(s)):
    a += int(s[i] == s[i - 1])
    s = s[:i] + str(1 - int(s[i - 1])) + s[i + 1:]
print(a)
