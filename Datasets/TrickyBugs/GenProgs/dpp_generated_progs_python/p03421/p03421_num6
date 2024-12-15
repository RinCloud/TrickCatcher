def construct_sequence(N, A, B):
    if N < A + B - 1 or A * B < N:
        return -1
    result = []
    for i in range(A):
        result.append(i + 1)
    for i in range(B - 2, -1, -1):
        result.append(A + i)
    remaining = N - A - B + 2
    for i in range(remaining):
        result.append(A)
    for i in range(remaining + 1, N):
        result.append(N - i + remaining)
    return result

N, A, B = map(int, input().split())
result = construct_sequence(N, A, B)
if result == -1:
    print(-1)
else:
    print(" ".join(map(str, result)))