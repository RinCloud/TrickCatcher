A, B, C, K = map(int, input().split())

max_sum = min(A, K)
K -= min(A, K)

if K > 0:
    max_sum -= min(B, K)
    K -= min(B, K)

if K > 0:
    max_sum -= min(C, K)

print(max_sum)