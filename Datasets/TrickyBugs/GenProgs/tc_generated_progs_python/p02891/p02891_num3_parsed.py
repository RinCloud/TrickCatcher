s = input()
k = int(input())
count = 0
if len(set(list(s))) == 1:
    print((len(s) * k) // 2)
    exit()
for i in range(len(s)-1):
    if s[i] == s[i + 1]:
        count += 1
print(count * k)