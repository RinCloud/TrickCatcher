import itertools

N = int(input())
values = list(map(int, input().split()))
costs = list(map(int, input().split()))

max_profit = 0

for i in range(1, N+1):
    for combination in itertools.combinations(range(N), i):
        X = sum(values[j] for j in combination)
        Y = sum(costs[j] for j in combination)
        max_profit = max(max_profit, X - Y)

print(max_profit)