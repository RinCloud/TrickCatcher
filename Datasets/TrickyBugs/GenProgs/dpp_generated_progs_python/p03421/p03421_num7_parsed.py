import sys

def main():
    # Read input from standard input
    N, A, B = map(int, sys.stdin.readline().split())

    # Check for valid input
    if A + B > N + 1 or A * B < N:
        print(-1)
        return

    # Initialize the sequence
    sequence = [0] * N

    # Construct the increasing subsequence
    for i in range(A):
        sequence[i] = i + 1

    # Construct the decreasing subsequence
    for i in range(B):
        sequence[N - i - 1] = i + 1

    # Fill the remaining elements
    remaining = N - A - B
    for i in range(remaining):
        sequence[A + i] = i + 1

    # Print the sequence
    print(" ".join(map(str, sequence)))

if __name__ == "__main__":
    main()