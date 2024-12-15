def count_ways(N, A, x):
    count = 0
    for i in range(1, 2**N):
        subset = [x[j] for j in range(N) if (i & (1 << j)) != 0]
        if sum(subset) / len(subset) == A:
            count += 1
    return count

N, A = map(int, input().split())
x = list(map(int, input().split()))
result = count_ways(N, A, x)
print(result)