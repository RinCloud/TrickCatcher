# Program

import sys

def main():
    # Read input values
    N = int(sys.stdin.readline())
    K = int(sys.stdin.readline())
    x = list(map(int, sys.stdin.readline().split()))
    
    # Calculate the minimum distance
    total_distance = 0
    for i in range(N):
        distance_type_A = abs(x[i] - 0)
        distance_type_B = abs(x[i] - K)
        total_distance += min(distance_type_A, distance_type_B) * 2
    
    # Print the minimum distance
    print(total_distance)


if __name__ == "__main__":
    main()