from itertools import product

def calculate_profit(f, p):
    n = len(f)
    max_profit = -float('inf')
    for periods in product([0,1], repeat=10):
        total_profit = 0
        for i in range(n):
            open_periods = sum(f[i][j][k] and periods[2*(j-1)+k] for j in range(1, 6) for k in range(2))
            total_profit += p[i][open_periods]
        max_profit = max(max_profit, total_profit)
    return max_profit

N = int(input())
F = [[[int(x) for x in input().split()] for _ in range(5)] for _ in range(N)]
P = [[int(x) for x in input().split()] for _ in range(N)]

max_profit = calculate_profit(F, P)
print(max_profit)