# PROGRAM:

N, M = map(int, input().split())
A = list(map(int, input().split()))

prefix_sum = [0] * (N+1)
for i in range(1, N+1):
    prefix_sum[i] = (prefix_sum[i-1] + A[i-1]) % M

count = {}
for i in prefix_sum:
    if i in count:
        count[i] += 1
    else:
        count[i] = 1

ans = 0
for i in count:
    ans += count[i] * (count[i] - 1) // 2

print(ans)