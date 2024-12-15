from itertools import accumulate

def count_subsequences_greater_than_equal_to_k(N, K, a):
    cumsum = [0] + list(accumulate(a))
    
    count = 0
    for i in range(1, N+1):
        for j in range(i, N+1):
            if (cumsum[j] - cumsum[i-1]) / (j - i + 1) >= K:
                count += 1

    return count

N, K = map(int, input().split())
a = [int(input()) for _ in range(N)]

print(count_subsequences_greater_than_equal_to_k(N, K, a))