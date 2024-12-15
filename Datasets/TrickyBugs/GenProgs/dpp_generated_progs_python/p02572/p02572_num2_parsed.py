import sys

MOD = 10**9 + 7

def main():
    # Read input
    N = int(input())
    A = list(map(int, input().split()))

    # Calculate the sum
    sum = 0
    for i in range(N - 1):
        for j in range(i + 1, N):
            sum += A[i] * A[j]
            sum %= MOD

    # Print the result
    print(sum)


if __name__ == '__main__':
    main()