import sys

MOD = 10**9 + 7

def xor_sum(N, A):
    xor_sum = 0
    for i in range(N - 1):
        for j in range(i + 1, N):
            xor_sum += A[i] ^ A[j]
            xor_sum %= MOD
    return xor_sum

def main():
    N = int(sys.stdin.readline().strip())
    A = list(map(int, sys.stdin.readline().strip().split()))

    result = xor_sum(N, A)
    print(result)

if __name__ == "__main__":
    main()