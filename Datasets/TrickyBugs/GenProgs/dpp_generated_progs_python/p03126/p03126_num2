N, M = map(int, input().split())

liked_by_all = set(range(1, M+1))

for _ in range(N):
    K, *A = map(int, input().split())
    liked_by_all &= set(A)

print(len(liked_by_all))