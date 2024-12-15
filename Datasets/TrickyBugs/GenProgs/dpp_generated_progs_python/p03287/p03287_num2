N, M = map(int, input().split())
A = list(map(int, input().split()))

prefix_sum = [0] * (N + 1)
for i in range(1, N + 1):
    prefix_sum[i] = prefix_sum[i - 1] + A[i - 1]
  
remainder_counts = [0] * M
for i in range(N + 1):
    remainder = prefix_sum[i] % M
    remainder_counts[remainder] += 1
  
result = 0
for count in remainder_counts:
    result += count * (count - 1) // 2

print(result)