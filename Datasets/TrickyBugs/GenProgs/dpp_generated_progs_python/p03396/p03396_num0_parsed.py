# Program:

import sys

def calculate_min_time(N, L, X, T):
    total_time = 0
    for i in range(N):
        dist = abs(X[i] - X[i-1])
        total_time += max(dist, T[i])
    return total_time + L

def main():
    # Read input from standard input
    input_lines = sys.stdin.readlines()
    N, L = map(int, input_lines[0].split())
    X = list(map(int, input_lines[1].split()))
    T = list(map(int, input_lines[2].split()))

    # Calculate minimum time
    min_time = calculate_min_time(N, L, X, T)

    # Print the result
    print(min_time)

if __name__ == "__main__":
    main()