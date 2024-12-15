import sys

def minimum_value(N, K):
    min_value = 0
    while N >= K:
        if N % K == 0:
            N = N // K
            min_value += 1
        else:
            remainder = N % K
            min_value += remainder
            N = N - remainder
    min_value += N
    return min_value

def main():
    # Read input from Standard Input
    N, K = map(int, sys.stdin.readline().split())
    
    # Call the function to find the minimum value
    result = minimum_value(N, K)
    
    # Print the result
    print(result)

if __name__ == "__main__":
    main()