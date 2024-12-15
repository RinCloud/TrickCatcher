N, K, M = map(int, input().split())
A = list(map(int, input().split()))

MOD = 10**9 + 7

def count_subsequences(A, K):
    freq = [0] * (K + 1)
    cnt = 0
    result = 0

    for i in range(len(A)):
        if freq[A[i]] == 0:
            cnt += 1
        freq[A[i]] += 1

        if cnt == K:
            result += 1
            freq[A[i]] -= 1
            cnt -= 1

        if cnt > K:
            freq[A[i]] -= 1
            cnt -= 1
            j = i - K + 1
            while freq[A[j]] > 1:
                freq[A[j]] -= 1
                cnt -= 1
                j += 1
            freq[A[j]] -= 1
            cnt -= 1

    return result

result = 0
for i in range(1, K + 1):
    result += count_subsequences(A, i)

print(result % MOD)