# PROGRAM

def min_operation_sort_sequence(N, A):
    operations = 0

    for i in range(N - 1):
        if A[i] > A[i + 1]:
            operations += 1

    return operations

N = int(input())
A = [int(input()) for _ in range(N)]

print(min_operation_sort_sequence(N, A))