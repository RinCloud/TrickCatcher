import sys
input = sys.stdin.readline

MOD = 10**9 + 7

def main():
    # Read input
    N = int(input())
    A = list(map(int, input().split()))

    # Calculate XOR sum
    xor_sum = 0
    for i in range(N-1):
        for j in range(i+1, N):
            xor_sum += A[i] ^ A[j]
            xor_sum %= MOD

    # Print result
    print(xor_sum)

if __name__ == '__main__':
    main()