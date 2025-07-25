n, m = map(int, input().split())

digits = [-1] * n

for _ in range(m):
    s, c = map(int, input().split())
    
    if digits[s-1] != -1 and digits[s-1] != c:
        print(-1)
        exit()
    
    digits[s-1] = c

if n > 1 and digits[0] == 0:
    print(-1)
else:
    if digits[0] == -1:
        digits[0] = 1
    for i in range(1, n):
        if digits[i] == -1:
            digits[i] = 0

    print(''.join(map(str, digits)))