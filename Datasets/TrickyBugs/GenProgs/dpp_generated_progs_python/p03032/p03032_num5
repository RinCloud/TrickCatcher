'''
N, K = map(int, input().split())
V = list(map(int, input().split()))

result = 0

for i in range(min(N, K)+1):
    for j in range(min(N, K)-i+1):
        left = V[:i]
        right = V[N-j:]
        jewels = left + right
        jewels.sort()
        total = sum(jewels)
        for k in range(min(len(jewels), K-i-j)):
            if jewels[k] < 0:
                total -= jewels[k]
            else:
                break
        result = max(result, total)

print(result)
'''