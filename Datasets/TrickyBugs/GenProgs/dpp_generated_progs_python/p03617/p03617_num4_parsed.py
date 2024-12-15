Q, H, S, D = map(int, input().split())
N = int(input())

cost = float('inf')

if N >= 2:
    cost = min(cost, D * (N // 2))
    N %= 2

if N >= 1:
    cost = min(cost, S * (N // 1))

if N >= 0.5:
    cost = min(cost, H * (N // 0.5))
    
if N >= 0.25:
    cost = min(cost, Q * (N // 0.25))

print(cost)