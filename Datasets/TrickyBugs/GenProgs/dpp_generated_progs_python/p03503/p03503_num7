import itertools

def calculate_profit(N, F, P):
    max_profit = float('-inf')
    
    for business_hours in itertools.product(range(2), repeat=N):
        total_profit = 0
        
        for j in range(5):
            open_periods = [k + 1 for k in range(2) if F[i][j][k] == 1 and business_hours[i] == 1 for i in range(N)]
            total_profit += P[j][len(open_periods)]
        
        max_profit = max(max_profit, total_profit)
    
    return max_profit


# Read input values
N = int(input())
F = []
for _ in range(N):
    F.append([list(map(int, input().split())) for _ in range(5)])
    
P = [list(map(int, input().split())) for _ in range(N)]

# Calculate maximum profit
max_profit = calculate_profit(N, F, P)

# Print maximum profit
print(max_profit)