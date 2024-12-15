def reconstruct_order(N, A):
    order = [0] * N
    for i in range(N):
        order[A[i] - 1] = str(i + 1)
    return ' '.join(order)


N = int(input())
A = list(map(int, input().split()))

print(reconstruct_order(N, A))