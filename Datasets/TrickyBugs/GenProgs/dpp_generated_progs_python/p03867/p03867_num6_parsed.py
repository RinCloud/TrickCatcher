import sys

def main():
    # Read input
    N, K = map(int, sys.stdin.readline().split())

    # Calculate the number of sequences
    if N == 1:
        ans = K
    elif N % 2 == 0:
        ans = (K * K // 2) % (10**9 + 7)
    else:
        ans = (K * (K + 1) // 2) % (10**9 + 7)

    # Print the result
    print(ans)

if __name__ == "__main__":
    main()