
def min_operations(N, K, A):
    operations = 0
    for i in range(1, N):
        if (A[i] - A[i-1]) % K != 0:
            operations += 1
    return operations

N, K = map(int, input().split())
A = list(map(int, input().split()))

print(min_operations(N, K, A))

