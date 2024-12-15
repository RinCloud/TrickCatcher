import sys


def solve(N, A):
    # Precompute the maximum A[i] + A[j] where 0 <= i < j <= 2^N-1
    max_sum = [[0] * (1 << N) for _ in range(N)]

    for i in range(N):
        for j in range(1 << N):
            max_sum[i][j] = max(A[x] + A[y] for x in range(1 << i) for y in range(1 << i, 1 << (i + 1)) if (x | y) <= j)

    # Print the results for K = 1 to 2^N-1
    for k in range(1, 1 << N):
        max_sum_k = max(max_sum[i][k] for i in range(N))
        print(max_sum_k)


def main():
    # Read input
    N = int(input())
    A = list(map(int, input().split()))

    solve(N, A)


if __name__ == "__main__":
    main()