N, A, B = map(int, input().split())

# calculate the number of blue balls
if A == 0:
    ans = 0
else:
    cycles = N // (A + B)
    remainder = N % (A + B)
    ans = cycles * A + min(remainder, A)

print(ans)