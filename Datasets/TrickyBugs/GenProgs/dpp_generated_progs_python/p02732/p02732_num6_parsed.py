# Program:

N = int(input())
A = list(map(int, input().split()))

freq = [0] * (N + 1)
for i in range(N):
    freq[A[i]] += 1

total_pairs = 0
for i in range(1, N + 1):
    total_pairs += freq[i] * (freq[i] - 1) // 2

for i in range(N):
    ans = total_pairs
    ans -= freq[A[i]] * (freq[A[i]] - 1) // 2
    ans += (freq[A[i]] - 1) * (freq[A[i]] - 2) // 2
    print(ans)