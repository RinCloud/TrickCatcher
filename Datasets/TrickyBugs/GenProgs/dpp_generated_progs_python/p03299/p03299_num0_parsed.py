MODIFIED PROGRAM:

import sys

MOD = 10**9 + 7

def calculate_ways(n, heights):
    dp = [[0] * 4 for _ in range(n + 1)]
    dp[0][0] = 1

    for i in range(1, n + 1):
        for j in range(4):
            for k in range(4):
                if not check_valid(j, k, heights[i - 1]):
                    continue
                    
                dp[i][j] = (dp[i][j] + dp[i - 1][k]) % MOD
    
    total_ways = sum(dp[n]) % MOD
    return total_ways

def check_valid(j, k, height):
    valid_combinations = [
        [0, 1, 2, 3], [0, 1, 3, 2], [0, 2, 1, 3], [0, 2, 3, 1],
        [0, 3, 1, 2], [0, 3, 2, 1], [1, 0, 2, 3], [1, 0, 3, 2],
        [1, 2, 0, 3], [1, 2, 3, 0], [1, 3, 0, 2], [1, 3, 2, 0],
        [2, 0, 1, 3], [2, 0, 3, 1], [2, 1, 0, 3], [2, 1, 3, 0],
        [2, 3, 0, 1], [2, 3, 1, 0], [3, 0, 1, 2], [3, 0, 2, 1],
        [3, 1, 0, 2], [3, 1, 2, 0], [3, 2, 0, 1], [3, 2, 1, 0]
    ]
    
    for combo in valid_combinations:
        red_count = 0
        blue_count = 0

        for index in combo:
            if index == 0:
                if red_count >= height:
                    break
                red_count += 1
            else:
                if blue_count >= height:
                    break
                blue_count += 1

        else:
            if red_count == height and blue_count == height:
                return True

    return False

def main():
    n = int(sys.stdin.readline().strip())
    heights = list(map(int, sys.stdin.readline().strip().split()))
    
    total_ways = calculate_ways(n, heights)
    print(total_ways)


if __name__ == "__main__":
    main()