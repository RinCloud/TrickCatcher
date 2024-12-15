import sys

def possible_to_reach_state(N, K, balls):
    gcd = balls[0]
    
    for i in range(1, N):
        gcd = get_gcd(gcd, balls[i])
        
    if K % gcd == 0 and K <= max(balls):
        return "POSSIBLE"
    
    return "IMPOSSIBLE"

def get_gcd(a, b):
    if b == 0:
        return a
    return get_gcd(b, a % b)

# Read input from Standard Input
input_lines = sys.stdin.readlines()
N, K = map(int, input_lines[0].split())
balls = list(map(int, input_lines[1].split()))

# Print the output
print(possible_to_reach_state(N, K, balls))