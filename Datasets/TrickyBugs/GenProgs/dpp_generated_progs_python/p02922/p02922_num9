def min_power_strips(A, B):
    if B <= A:
        return 1
    elif B % A == 0:
        return B // A
    else:
        return B // A + 1

A, B = map(int, input().split())
print(min_power_strips(A, B))