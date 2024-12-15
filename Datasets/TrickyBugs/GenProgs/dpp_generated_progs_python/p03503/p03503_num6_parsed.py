N = int(input())

F = []
for _ in range(N):
    F.append(list(map(int, input().split())))

P = []
for _ in range(N):
    P.append(list(map(int, input().split())))

max_profit = float('-inf')

for i in range(1, 2**10):
    profit = 0
    for j in range(N):
        count = 0
        for k in range(10):
            if (i >> k) & F[j][k]:
                count += 1
        profit += P[j][count]
    max_profit = max(max_profit, profit)

print(max_profit)