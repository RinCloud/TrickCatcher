def minimum_power_strips(A, B):
    if B == 1:
        return 0
    elif B <= A:
        return 1
    elif B % A == 0:
        return B // A
    else:
        return B // A + 1

A, B = map(int, input().split())
print(minimum_power_strips(A, B))