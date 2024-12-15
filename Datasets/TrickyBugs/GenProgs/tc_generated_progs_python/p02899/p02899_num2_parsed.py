N = int(input())
A = list(map(int, input().split()))

order = [0] * N
for i, a in enumerate(A):
    order[a - 1] = i + 1

print(' '.join(map(str, order)))
