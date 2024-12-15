def get_max_score(N, M, Q, quadruples):
    def dfs(A, last):
        nonlocal max_score
        if len(A) == N:
            score = 0
            for a, b, c, d in quadruples:
                if A[b-1] - A[a-1] == c:
                    score += d
            max_score = max(max_score, score)
        else:
            for i in range(last, M+1):
                A.append(i)
                dfs(A, i)
                A.pop()
    
    max_score = 0
    dfs([], 1)
    return max_score


N, M, Q = map(int, input().split())
quadruples = []
for _ in range(Q):
    a, b, c, d = map(int, input().split())
    quadruples.append((a, b, c, d))

print(get_max_score(N, M, Q, quadruples))