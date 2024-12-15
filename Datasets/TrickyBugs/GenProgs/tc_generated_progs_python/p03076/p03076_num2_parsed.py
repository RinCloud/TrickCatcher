A = int(input())
ans = 0

for i in range(4):
    B = int(input())
    if A % 10 > B % 10 > 0:
        A, B = B, A
    ans += -(-B // 10) * 10

print(A + ans)
