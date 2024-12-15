N, M = map(int, input().split())

digits = ['-1'] * N

for _ in range(M):
    s, c = map(int, input().split())
    if digits[s-1] == '-1' or digits[s-1] == str(c):
        digits[s-1] = str(c)
    else:
        print(-1)
        exit()

if digits[0] == '0' and N != 1:
    print(-1)
else:
    print(''.join(digits))