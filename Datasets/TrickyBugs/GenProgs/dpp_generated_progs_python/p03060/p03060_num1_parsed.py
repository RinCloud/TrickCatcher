import sys

def calculate_max_profit(N, V, C):
    max_profit = 0
    for i in range(N):
        profit = V[i] - C[i]
        if profit > 0:
            max_profit += profit
    return max_profit

def main():
    # Read input from Standard Input
    N = int(input().strip())
    V = list(map(int, input().strip().split()))
    C = list(map(int, input().strip().split()))

    # Calculate maximum possible value of X-Y
    max_profit = calculate_max_profit(N, V, C)

    # Print the maximum possible value of X-Y
    print(max_profit)

if __name__ == "__main__":
    main()