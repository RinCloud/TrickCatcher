s = input()
k = int(input())
m = 0
j = 0

if len(set(list(s))) == 1:
    print((len(s) * k) // 2)
    exit()

for i in range(len(s)):
    if len(s) <= j + 1:
        a = m * k
        if s[0] == s[-1]:
            print(a + k - 1)
        else:
            print(a)
        break
    if s[j] == s[j + 1]:
        if j == 0 or s[j] != s[j - 1]:
            m += 1
        else:
            m += 2
        j += 1
    j += 1