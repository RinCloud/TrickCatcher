import itertools

def max_profit(N, F, P):
    max_profit = float('-inf')

    # Generate all possible combinations of shop open periods
    combinations = list(itertools.product([0, 1], repeat=10))

    # Iterate through each combination and calculate profit
    for combination in combinations:
        profit = 0

        # Check if Joisino's shop is open during each period
        for i in range(N):
            open_periods = sum(combination[j] and F[i][j] for j in range(10))
            profit += P[i][open_periods]

        max_profit = max(max_profit, profit)

    return max_profit


# Read input from standard input
N = int(input())
F = []
for _ in range(N):
    F.append(list(map(int, input().split())))

P = []
for _ in range(N):
    P.append(list(map(int, input().split())))

# Calculate and print the maximum possible profit
print(max_profit(N, F, P))