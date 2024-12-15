import itertools

def calculate_profit(N, F, P):
    max_profit = float('-inf')
    for open_periods in itertools.product([0, 1], repeat=10):
        profit = 0
        for i in range(N):
            count = 0
            for j in range(5):
                for k in range(2):
                    if open_periods[j*2+k] and F[i][j][k]:
                        count += 1
            profit += P[i][count]
        max_profit = max(max_profit, profit)
    return max_profit

N = int(input())
F = []
for _ in range(N):
    F.append([list(map(int, input().split())) for _ in range(5)])
P = [list(map(int, input().split())) for _ in range(N)]

result = calculate_profit(N, F, P)
print(result)