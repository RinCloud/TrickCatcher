def is_template_contained(N, M, A, B):
    for i in range(N - M + 1):
        for j in range(N - M + 1):
            submatrix = []
            for k in range(M):
                submatrix.append(A[i+k][j:j+M])
            if submatrix == B:
                return "Yes"
    return "No"

N, M = map(int, input().split())
A = [input() for _ in range(N)]
B = [input() for _ in range(M)]
print(is_template_contained(N, M, A, B))
