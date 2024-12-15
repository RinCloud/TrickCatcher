from itertools import product

def calculate_profit(N, F, P):
    max_profit = float('-inf')
    for shop_open in product([0, 1], repeat=10):
        if any(shop_open):
            profit = 0
            for shop, periods in enumerate(F):
                c = sum(1 for period in periods if period and shop_open[period - 1])
                profit += P[shop][c]
            max_profit = max(max_profit, profit)
    return max_profit


N = int(input())
F = []
for _ in range(N):
    F.append(list(map(int, input().split())))
P = [list(map(int, input().split())) for _ in range(N)]

result = calculate_profit(N, F, P)
print(result)