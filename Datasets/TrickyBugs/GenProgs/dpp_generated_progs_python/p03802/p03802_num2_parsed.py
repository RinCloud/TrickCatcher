import sys

def main():
    # Read the input from standard input
    N = int(sys.stdin.readline())
    flags = []
    for _ in range(N):
        x, y = map(int, sys.stdin.readline().split())
        flags.append((x, y))

    # Sort the flags in ascending order of x coordinates
    flags.sort()

    # Calculate the maximum possible value of d
    max_d = 0
    for i in range(1, N):
        d = flags[i][0] - flags[i-1][0]
        max_d = max(max_d, d)

    # Print the answer
    print(max_d)

if __name__ == '__main__':
    main()