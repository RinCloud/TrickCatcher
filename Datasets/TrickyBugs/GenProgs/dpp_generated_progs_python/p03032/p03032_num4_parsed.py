import collections

def maximize_jewels(N, K, V):
    max_sum = 0
    
    for i in range(min(N, K) + 1):
        for j in range(min(N, K) + 1 - i):
            jewels = collections.deque(V[:i] + V[N - j:])
            
            while len(jewels) > 0 and jewels[0] < 0 and K - i - j > 0:
                jewels.popleft()
                K -= 1
            
            max_sum = max(max_sum, sum(jewels))
    
    return max_sum

N, K = map(int, input().split())
V = list(map(int, input().split()))

print(maximize_jewels(N, K, V))