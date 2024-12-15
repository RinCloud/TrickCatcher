import sys

def main():
    # Read the input
    n, x = map(int, input().split())
    positions = list(map(int, input().split()))

    # Initialize the dp table
    dp = [float('inf')] * (n+1)
    dp[0] = 0

    # Calculate the minimum energy required
    for i in range(1, n+1):
        for j in range(i):
            dp[i] = min(dp[i], dp[j] + ((positions[i-1] - positions[j] + 1) // 2) * (2 * (i - j) - 1) + x)

    # Print the answer
    print(dp[n])

if __name__ == '__main__':
    main()