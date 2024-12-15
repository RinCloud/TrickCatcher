# I will provide a Python program that computes the number of ways to arrange the N balls so that Takahashi will need exactly i moves to collect all the blue balls.

from math import comb

def count_ball_arrangements(N, K):
    MOD = 1000000007
    arrangements = []
    
    # Compute the number of ways to arrange the N balls for each i from 1 to K
    for i in range(1, K + 1):
        # Compute the number of ways to choose the starting positions of the blue balls
        start_positions = N - K + 1
        
        # Compute the number of ways to distribute the remaining red balls between the blue balls
        red_balls = K - i
        distributions = comb(red_balls + i - 1, i - 1)
        
        # Compute the total number of arrangements for i moves and add it to the list
        total_arrangements = (start_positions * distributions) % MOD
        arrangements.append(total_arrangements)
    
    return arrangements

# Read input
N, K = map(int, input().split())

# Compute and print the number of ways to arrange the balls
arrangements = count_ball_arrangements(N, K)
for arrangement in arrangements:
    print(arrangement)