import sys

def main():
    # Read the input
    N = int(sys.stdin.readline().strip())
    flags = []
    for _ in range(N):
        x, y = map(int, sys.stdin.readline().split())
        flags.append((x, y))
    
    # Sort the flags by their x-coordinate
    flags.sort()
    
    # Find the maximum distance between the flags
    max_dist = 0
    for i in range(1, N):
        dist = flags[i][0] - flags[i-1][0]
        max_dist = max(max_dist, dist)
    
    # Print the answer
    print(max_dist)

if __name__ == "__main__":
    main()