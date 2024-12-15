MOD = 10**9+7

N = int(input())
A = list(map(int, input().split()))

total_sum = 0

for i in range(N-1):
    for j in range(i+1, N):
        total_sum += A[i] * A[j]

total_sum = total_sum % MOD

print(total_sum)