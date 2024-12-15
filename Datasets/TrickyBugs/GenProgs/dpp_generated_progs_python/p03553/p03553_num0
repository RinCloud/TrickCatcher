def max_earn(N, a):
    sums = [0] * (N+1)
    for i in range(N, 0, -1):
        sums[i] = a[i-1]
        for j in range(i*2, N+1, i):
            sums[i] += sums[j]
    return max(sums)

N = int(input())
a = list(map(int, input().split()))
print(max_earn(N, a))