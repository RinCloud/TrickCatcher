def f(x, m):
    return x % m

def calculate_sum(N, X, M):
    A = [X]
    for i in range(1, N):
        A.append(f(A[i-1]**2, M))
    return sum(A)

N, X, M = map(int, input().split())
print(calculate_sum(N, X, M))