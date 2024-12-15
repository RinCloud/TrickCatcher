n = int(input())
s = input()

cnt = 0
for i in range(n):
    a = []
    p = 0
    for j in range(i, n):
        if s[j] == '>':
            p += 1
        elif s[j] == '<':
            p -= 1
        elif s[j] == '+':
            a.append(p)
            a = list(set(a))
        elif s[j] == '-':
            a.append(p)
            a = list(set(a))
    
    cnt += len(a)

print(cnt)