import sys

MOD = 10**9 + 7

def count_subsequences(N, K, M, A):
    count = 0
    for i in range(N):
        for j in range(i + K, N + 1):
            subseq = set(A[i:j])
            if len(subseq) == K:
                count += 1
    return count % MOD

def main():
    N, K, M = map(int, input().split())
    A = list(map(int, input().split()))

    result = count_subsequences(N, K, M, A)
    print(result)

if __name__ == "__main__":
    main()