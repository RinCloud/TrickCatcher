from itertools import product

N, P = map(int, input().split())
A = list(map(int, input().split()))

count = 0

for subset in product([True, False], repeat=N):
    total = sum(A[i] for i in range(N) if subset[i])
    if total % 2 == P:
        count += 1

print(count)