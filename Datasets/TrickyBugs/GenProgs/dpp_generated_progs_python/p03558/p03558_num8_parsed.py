import math

def find_smallest_sum(K):
    if K == 0:
        return 0

    min_sum = math.inf

    for i in range(1, 10):
        if K % i == 0:
            min_sum = min(min_sum, i)

    return min_sum

K = int(input())
print(find_smallest_sum(K))