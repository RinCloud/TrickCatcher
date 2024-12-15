# Generating Program:

N, X, Y = map(int, input().split())

def shortest_distance(i, j):
    if i < j:
        return min(j - i, abs(X - i) + 1 + abs(j - Y))
    else:
        return shortest_distance(j, i)

for k in range(1, N):
    count = 0
    for i in range(1, N):
        for j in range(i+1, N+1):
            if shortest_distance(i, j) == k:
                count += 1
    print(count)