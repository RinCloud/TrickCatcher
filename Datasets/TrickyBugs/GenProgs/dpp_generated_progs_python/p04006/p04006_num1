import sys

def main():
    # Read the input values
    N, x = map(int, sys.stdin.readline().strip().split())
    a = list(map(int, sys.stdin.readline().strip().split()))

    # Find the minimum time
    min_time = sum(a)
    for i in range(1, N):
        time = i * x + sum(a[:i])
        min_time = min(min_time, time)
    
    # Print the minimum time
    print(min_time)

if __name__ == "__main__":
    main()