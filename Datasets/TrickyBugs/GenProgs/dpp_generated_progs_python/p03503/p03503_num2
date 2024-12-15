from itertools import product

N = int(input())
F = []
for _ in range(N):
    F.append(list(map(int, input().split())))

P = []
for _ in range(N):
    P.append(list(map(int, input().split())))

max_profit = float('-inf')
for open_periods in product([0, 1], repeat=10):
    if 1 not in open_periods:
        continue
    profit = 0
    for i in range(N):
        count = sum([1 for j in range(10) if open_periods[j] == 1 and F[i][j] == 1])
        profit += P[i][count]
    max_profit = max(max_profit, profit)

print(max_profit)