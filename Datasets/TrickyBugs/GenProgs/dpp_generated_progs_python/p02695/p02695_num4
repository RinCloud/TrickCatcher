def calculate_score(N, M, Q, queries):
    def backtrack(score, A):
        nonlocal max_score
        if len(A) == N:
            max_score = max(score, max_score)
            return
        for i in range(A[-1], M+1):
            A.append(i)
            for a, b, c, d in queries:
                if A[b-1] - A[a-1] == c:
                    score += d
            backtrack(score, A)
            A.pop()
            for a, b, c, d in queries:
                if A[b-1] - A[a-1] == c:
                    score -= d

    max_score = 0
    for i in range(1, M+1):
        backtrack(0, [i])
    return max_score

N, M, Q = map(int, input().split())
queries = []
for _ in range(Q):
    queries.append(list(map(int, input().split())))
print(calculate_score(N, M, Q, queries))