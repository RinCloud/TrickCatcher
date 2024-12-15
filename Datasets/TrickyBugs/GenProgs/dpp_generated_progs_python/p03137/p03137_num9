def min_moves(N, M, X):
    visited = set(X)
    left = [x for x in X if x < 0]
    left.sort(reverse=True)
    right = [x for x in X if x > 0]
    right.sort()
    min_moves = float('inf')
    for i in range(1, N+1):
        if i <= len(left) and N-i <= len(right):
            min_moves = min(min_moves, abs(left[i-1]) + abs(right[N-i]))
    return min_moves

N, M = map(int, input().split())
X = list(map(int, input().split()))

print(min_moves(N, M, X))