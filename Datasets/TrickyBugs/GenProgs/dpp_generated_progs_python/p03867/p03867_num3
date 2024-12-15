N, K = map(int, input().split())

if K == 1:
    print(K)
elif N == 1:
    print(K)
elif N == 2:
    print(K * K % (10**9 + 7))
else:
    print(K * (K - 1) % (10**9 + 7) * pow(K - 2, N - 2, 10**9 + 7) % (10**9 + 7))