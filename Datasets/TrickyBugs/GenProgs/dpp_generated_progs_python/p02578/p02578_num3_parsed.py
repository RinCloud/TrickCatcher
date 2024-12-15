import sys

def solve(N, A):
    stools = [0] * N

    for i in range(1, N):
        if A[i] > A[i-1]:
            stools[i] = stools[i-1] + A[i] - A[i-1]

    return sum(stools)

if __name__ == '__main__':
    N = int(sys.stdin.readline().rstrip())
    A = list(map(int, sys.stdin.readline().split()))

    result = solve(N, A)
    print(result)