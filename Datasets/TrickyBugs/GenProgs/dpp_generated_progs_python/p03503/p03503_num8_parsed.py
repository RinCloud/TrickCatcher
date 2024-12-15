from itertools import product

def calculate_profit(N, F, P):
    max_profit = float('-inf')
    # Generate all possible combinations of opening/closing for Joisino's shop
    for opening_pattern in product([0, 1], repeat=10):
        profit = 0
        # Iterate over each shop
        for i in range(N):
            c_i = 0
            # Count the number of periods where both Joisino's shop and shop i are open
            for j in range(5):
                for k in range(2):
                    if F[i][j][k] == 1 and opening_pattern[2*j+k] == 1:
                        c_i += 1
            profit += P[i][c_i]
        # Update the maximum profit
        max_profit = max(max_profit, profit)
    return max_profit


# Read input values
N = int(input())
F = []
for _ in range(N):
    F.append([list(map(int, input().split())) for _ in range(5)])
P = [list(map(int, input().split())) for _ in range(N)]

# Calculate and print the maximum possible profit
max_profit = calculate_profit(N, F, P)
print(max_profit)