import sys


def solve(N, K, A):
    gcd = A[0]
    for i in range(1, N):
        gcd = math.gcd(gcd, A[i])
    if K % gcd == 0 and K <= max(A):
        return "POSSIBLE"
    else:
        return "IMPOSSIBLE"


if __name__ == "__main__":
    N, K = map(int, input().strip().split())
    A = list(map(int, input().strip().split()))

    print(solve(N, K, A))