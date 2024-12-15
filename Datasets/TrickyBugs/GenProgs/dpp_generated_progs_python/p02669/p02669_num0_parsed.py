'''
Miniunm Coins Needed to reach N number, given T number of testcase.
'''

def min_coins_needed(N, A, B, C, D):
    coins = [float('inf')] * (N + 1) # Initializing coins array with maximum value
    coins[0] = 0 # Number of coins required for 0 is always 0
    
    for i in range(1, N + 1):
        coins[i] = min(coins[i], coins[i - 1] + D) # Increase or decrease the number by 1
        if i % 2 == 0:
            coins[i] = min(coins[i], coins[i // 2] + A) # Multiply the number by 2
        if i % 3 == 0:
            coins[i] = min(coins[i], coins[i // 3] + B) # Multiply the number by 3
        if i % 5 == 0:
            coins[i] = min(coins[i], coins[i // 5] + C) # Multiply the number by 5
    
    return coins[N]

# Taking input from user
T = int(input())

for _ in range(T):
    N, A, B, C, D = map(int, input().split())
    ans = min_coins_needed(N, A, B, C, D)
    print(ans)

'''