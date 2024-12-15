import math

def count_possible_sums(N, A, B):
    if N == 1:
        if A == B:
            return 1
        else:
            return 0
    elif A > B:
        return 0
    else:
        return B * (N - 2) - A * (N - 2) + 1

N, A, B = map(int, input().split())
print(count_possible_sums(N, A, B))