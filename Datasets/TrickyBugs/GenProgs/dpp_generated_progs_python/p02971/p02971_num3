import sys

def main():
    # Read input
    N = int(sys.stdin.readline().strip())
    sequence = []
    for _ in range(N):
        sequence.append(int(sys.stdin.readline().strip()))

    # Find maximum for each i
    for i in range(N):
        max_val = -1
        for j in range(N):
            if j != i:
                max_val = max(max_val, sequence[j])
        print(max_val)

if __name__ == "__main__":
    main()