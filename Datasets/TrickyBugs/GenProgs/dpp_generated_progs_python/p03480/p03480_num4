s = input()

n = len(s)

k = n
while k > 0:
    count = 0
    for i in range(n - k + 1):
        if s[i] == '1':
            count += 1
    if count % 2 == 0 or count == n:
        break
    k -= 1

print(k)