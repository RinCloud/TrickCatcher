MOD = 10**9 + 7

N = int(input())
A = list(map(int, input().split()))

total_xor = 0
for i in range(N-1):
    for j in range(i+1, N):
        xor = A[i] ^ A[j]
        total_xor = (total_xor + xor) % MOD

print(total_xor)