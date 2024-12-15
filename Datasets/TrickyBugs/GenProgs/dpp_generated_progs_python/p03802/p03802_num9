import sys

def main():
    # Read N
    N = int(sys.stdin.readline().strip())

    # Read flag coordinates
    flags = []
    for _ in range(N):
        x, y = map(int, sys.stdin.readline().split())
        flags.append((x, y))

    # Find the maximum possible value of d
    max_d = float('-inf')
    for i in range(N):
        for j in range(i+1, N):
            d = abs(flags[i][0] - flags[j][0]) + abs(flags[i][1] - flags[j][1])
            max_d = max(max_d, d)

    # Print the answer
    print(max_d)

if __name__ == "__main__":
    main()