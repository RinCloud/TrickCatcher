import itertools

N, P = map(int, input().split())
A = list(map(int, input().split()))

count = 0
for r in range(N+1):
    for combination in itertools.combinations(A, r):
        if sum(combination) % 2 == P:
            count += 1

print(count)