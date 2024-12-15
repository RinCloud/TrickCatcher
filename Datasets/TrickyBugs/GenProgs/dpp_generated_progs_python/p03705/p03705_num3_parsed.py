import math

N, A, B = map(int, input().split())

if A == B:
    print(1)
else:
    if N == 1:
        print(0)
    else:
        min_sum = A * (N - 1) + B
        max_sum = A + B * (N - 1)
        print(max_sum - min_sum + 1)