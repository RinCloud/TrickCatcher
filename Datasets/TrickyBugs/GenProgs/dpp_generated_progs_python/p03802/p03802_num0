import sys

def main():
    # Read the input
    n = int(sys.stdin.readline().strip())
    flags = []
    for _ in range(n):
        x, y = map(int, sys.stdin.readline().strip().split())
        flags.append((x, y))
    
    # Sort the flags by their coordinates in increasing order
    flags.sort()
    
    # Initialize the minimum distance
    min_distance = float('inf')
    
    # Iterate through the flags
    for i in range(n - 1):
        distance = flags[i + 1][0] - flags[i][0]
        min_distance = min(min_distance, distance)
    
    # Print the result
    print(min_distance)

if __name__ == '__main__':
    main()