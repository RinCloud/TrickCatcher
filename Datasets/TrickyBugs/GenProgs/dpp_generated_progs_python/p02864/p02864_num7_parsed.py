N, K = map(int, input().split())
H = list(map(int, input().split()))

if K >= N:
    print(0)
else:
    H.sort(reverse=True)
    print(sum(H[K:]))
