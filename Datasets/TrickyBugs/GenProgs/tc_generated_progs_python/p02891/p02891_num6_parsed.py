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
        if s[0] == s[-1] == s[len(s) // 3]:
            print(a + k - 1)
        else:
            print(a)
        break
    if s[j] == s[j + 1]:
        m += 1
        j += 1
    j += 1

def num_min_operations(s, k):
    if len(set(list(s))) == 1:
        return (len(s) * k) // 2
    m = 0
    j = 0
    for i in range(len(s)):
        if len(s) <= j + 1:
            a = m * k
            if s[0] == s[-1] == s[len(s) // 3]:
                return a + k - 1
            else:
                return a
        if s[j] == s[j + 1]:
            m += 1
            j += 1
        j += 1
    return

s = input()
k = int(input())
print(num_min_operations(s, k))