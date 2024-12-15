import sys

def main():
    # Read input values
    n = int(sys.stdin.readline().strip())
    a = list(map(int, sys.stdin.readline().strip().split()))
    
    # Initialize variables
    min_sadness = float('inf')
    
    # Iterate over all possible b values
    for b in range(-n, n+1):
        sadness = 0
        for i in range(n):
            sadness += abs(a[i] - (b+i+1))
        min_sadness = min(min_sadness, sadness)
    
    # Print the minimum possible sadness
    print(min_sadness)

if __name__ == "__main__":
    main()