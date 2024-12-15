from itertools import product

N, P = map(int, input().split())
A = list(map(int, input().split()))

ans = 0

# generate all possible combinations of selecting bags
for bits in product([0, 1], repeat=N):
    total_biscuits = sum(A[i] for i in range(N) if bits[i] == 1)
    if total_biscuits % 2 == P:
        ans += 1

print(ans)