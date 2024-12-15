import itertools

N = int(input())

F = []
for _ in range(N):
    F.append(list(map(int, input().split())))

P = []
for _ in range(N):
    P.append(list(map(int, input().split())))

max_profit = float('-inf')

for bits in itertools.product([0, 1], repeat=10):
    if sum(bits) == 0:
        continue

    profit = 0
    for i, shop in enumerate(F):
        c = sum(shop[k] and bits[k] for k in range(10))
        profit += P[i][c]

    max_profit = max(max_profit, profit)

print(max_profit)