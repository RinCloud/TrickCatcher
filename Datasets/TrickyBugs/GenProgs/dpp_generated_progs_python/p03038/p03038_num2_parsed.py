N, M = map(int, input().split())
A = list(map(int, input().split()))
BC = [list(map(int, input().split())) for _ in range(M)]

max_sum = sum(A)
for b, c in BC:
    count = min(A.count(c), b)
    max_sum += (c - A.count(c) * c)
    max_sum -= (A.count(c) * c - c) * min(count, b)
    b -= count
    for i in range(N):
        if A[i] < c and b > 0:
            max_sum += c
            b -= 1
    print(max_sum)