Q, H, S, D = map(int, input().split())
N = int(input())

cost = float('inf')

for i in range(N+1):
    cost = min(cost, (i * Q) + ((N - i) // 2) * min(2*Q, H, S, D) + ((N - i) % 2) * min(Q + H, Q + S, Q + D))
    
print(cost)