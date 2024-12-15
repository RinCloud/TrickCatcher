N, M = map(int, input().split())
cost = 0

for i in range(M):
    X, Y, Z = map(int, input().split())
    if Z % 2 != 0:
        cost += 1

print(cost)