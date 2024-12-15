def count_subsequences(N, K, a):
    count = 0

    for i in range(N):
        subsum = 0
        for j in range(i, N):
            subsum += a[j]
            submean = subsum / (j - i + 1)
            if submean >= K:
                count += 1

    return count

N, K = map(int, input().split())
a = []
for _ in range(N):
    a.append(int(input()))

result = count_subsequences(N, K, a)
print(result)