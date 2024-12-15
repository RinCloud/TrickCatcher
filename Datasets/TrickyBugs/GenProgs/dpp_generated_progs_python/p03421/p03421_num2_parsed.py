import sys

def main():
    # Read the input values
    N, A, B = map(int, sys.stdin.readline().split())

    # Check if it is possible to construct the sequence
    if A + B > N + 1 or A * B < N:
        print("-1")
        return

    # Construct the sequence
    sequence = []
    for i in range(1, A + 1):
        sequence.append(str(i))

    for i in range(B - 1, 0, -1):
        sequence.append(str(i + A))

    remaining = N - A - B + 1
    for i in range(remaining):
        sequence.append(str(A + B))

    # Print the sequence
    print(" ".join(sequence))

if __name__ == "__main__":
    main()