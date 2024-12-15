import itertools

N, K = map(int, input().split())
A = list(map(int, input().split()))

divisible_counts = [0] * 60

for i in range(N):
    bit = 0
    while A[i] > 0:
        if A[i] & 1:
            divisible_counts[bit] += 1
        A[i] >>= 1
        bit += 1

divisible_counts.sort(reverse=True)

ans = 0
for i in range(K):
    bit = 0
    while divisible_counts[bit] == 0:
        bit += 1
    divisible_counts[bit] -= 1
    ans += 1 << bit
    for j in range(bit):
        divisible_counts[j] += 1
    ans %= 1000000007

print(ans)