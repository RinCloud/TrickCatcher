from heapq import heappop, heappush

def calculate_minimum_coins(n, a, b, c, d):
    # Create a list to store the minimum number of coins for each number from 0 to n
    dp = [-1] * (n + 1)
    # Initialize the minimum number of coins for number 0 to be 0
    dp[0] = 0
    # Create a priority queue to store the numbers to be processed
    pq = [(0, 0)]
    
    # Use Dijkstra's algorithm to find the minimum number of coins
    while pq:
        coins, num = heappop(pq)
        
        # If the number is already processed with a smaller number of coins
        if dp[num] < 0 or coins < dp[num]:
            dp[num] = coins
            # Multiply the number by 2, 3, 5 and add or subtract 1
            for k in [-1, 1, 2, 3, 5]:
                new_num = num * k
                new_coins = coins + d
                
                if new_num > n:
                    break
                
                if k == -1:
                    new_coins += d
                
                if k == 2:
                    cost = a
                elif k == 3:
                    cost = b
                elif k == 5:
                    cost = c
                else:
                    cost = 0
                
                new_coins += cost
                
                if dp[new_num] < 0 or new_coins < dp[new_num]:
                    heappush(pq, (new_coins, new_num))
    
    return dp[n]

# Read the number of testcases
t = int(input())

# Process each testcase
for _ in range(t):
    # Read the numbers and costs
    n, a, b, c, d = map(int, input().split())
    # Calculate and print the minimum number of coins
    print(calculate_minimum_coins(n, a, b, c, d))