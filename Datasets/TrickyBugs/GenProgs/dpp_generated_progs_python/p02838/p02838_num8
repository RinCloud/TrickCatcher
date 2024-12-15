import sys

MOD = 10**9 + 7

def main():
    # Read input
    n = int(sys.stdin.readline())
    a = list(map(int, sys.stdin.readline().split()))

    # Compute XOR sum
    xor_sum = 0
    for i in range(n - 1):
        for j in range(i + 1, n):
            xor_sum += a[i] ^ a[j]
            xor_sum %= MOD

    # Print result
    print(xor_sum)

if __name__ == "__main__":
    main()