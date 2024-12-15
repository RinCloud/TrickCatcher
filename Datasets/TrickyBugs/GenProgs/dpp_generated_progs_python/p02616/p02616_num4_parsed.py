# Program

mod = 10**9 + 7

def max_product(N, K, A):
    A.sort(reverse=True)
    ans = 1
    if A[0] < 0 and K % 2 == 1:
        for i in range(K):
            ans = (ans * A[i]) % mod
    else:
        i = 0
        j = N - 1
        cnt = 0
        while cnt < K:
            if cnt == K - 1:
                ans = (ans * A[i]) % mod
                i += 1
            else:
                if A[i] * A[i+1] > A[j] * A[j-1]:
                    ans = (ans * A[i] * A[i + 1]) % mod
                    i += 2
                else:
                    ans = (ans * A[j]) % mod
                    j -= 1
            cnt += 1
    return ans

N, K = map(int, input().split())
A = list(map(int, input().split()))

result = max_product(N, K, A)
print(result)