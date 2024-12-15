def max_value(N, V, C):
    max_value = 0
    for i in range(2**N):
        value = 0
        cost = 0
        for j in range(N):
            if (i >> j) & 1:
                value += V[j]
                cost += C[j]
        max_value = max(max_value, value - cost)
    return max_value

N = int(input())
V = list(map(int, input().split()))
C = list(map(int, input().split()))

print(max_value(N, V, C))