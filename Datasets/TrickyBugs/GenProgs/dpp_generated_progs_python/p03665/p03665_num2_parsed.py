from itertools import combinations

N, P = map(int, input().split())
A = list(map(int, input().split()))

count = 0
for i in range(N+1):
    for comb in combinations(A, i):
        if sum(comb) % 2 == P:
            count += 1

print(count)