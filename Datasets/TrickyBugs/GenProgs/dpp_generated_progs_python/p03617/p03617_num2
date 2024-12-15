import sys

def calculate_cost(Q, H, S, D, N):
    cost = float('inf')
    
    # Buy 0.25-liter bottles
    cost = min(cost, Q * N)
    
    # Buy 0.5-liter bottles
    if N % 0.5 == 0:
        cost = min(cost, H * (N // 0.5))
    else:
        cost = min(cost, H * (N // 0.5 + 1))
    
    # Buy 1-liter bottles
    if N % 1 == 0:
        cost = min(cost, S * N)
    else:
        cost = min(cost, S * (N // 1 + 1))
    
    # Buy 2-liter bottles
    if N % 2 == 0:
        cost = min(cost, D * (N // 2))
    else:
        cost = min(cost, D * (N // 2 + 1))
        
    return cost

if __name__ == '__main__':
    # Read input from standard input
    Q, H, S, D = map(int, sys.stdin.readline().split())
    N = int(sys.stdin.readline())
    
    # Calculate the cost
    cost = calculate_cost(Q, H, S, D, N)
    
    # Print the result
    print(cost)