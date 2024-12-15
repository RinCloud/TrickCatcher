from collections import Counter

N, M = map(int, input().split())
liked_by = Counter()
for _ in range(N):
    K, *A = map(int, input().split())
    liked_by.update(A)

liked_by_all = [food for food, count in liked_by.items() if count == N]
print(len(liked_by_all))