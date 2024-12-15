from math import gcd

def possible_to_reach(N, K, balls):
    max_ball = max(balls)
    if K > max_ball or K % gcd(max_ball, sum(balls)) != 0:
        return "IMPOSSIBLE"
    return "POSSIBLE"

# Read input from standard input
N, K = map(int, input().split())
balls = list(map(int, input().split()))

# Call the function and print the result
print(possible_to_reach(N, K, balls))