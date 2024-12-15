import sys

def min_fatigue(N, A, B, X):
    total_fatigue = 0
    for i in range(N-1):
        distance = X[i+1] - X[i]
        if distance * A <= B:
            total_fatigue += distance * A
        else:
            total_fatigue += B
    return total_fatigue

def main():
    # Read input
    N, A, B = map(int, sys.stdin.readline().split())
    X = list(map(int, sys.stdin.readline().split()))

    # Call function and print result
    result = min_fatigue(N, A, B, X)
    print(result)

if __name__ == "__main__":
    main()