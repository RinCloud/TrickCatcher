import sys
def input():
    return sys.stdin.readline().strip()

def solve(N, C, X, V):
    # Calculate the prefix sum of values and prefix sum of energies
    prefix_sum_value = [0]
    prefix_sum_energy = [0]
    for i in range(N):
        prefix_sum_value.append(prefix_sum_value[-1] + V[i])
        prefix_sum_energy.append(prefix_sum_energy[-1] + (C - X[i]))

    ans = 0
    
    # Attempt to eat sushi starting from each sushi
    for i in range(N):
        # Calculate the total value and energy if Nakahashi starts eating sushi at sushi i
        # Nakahashi can walk in positive and negative direction, so we take the maximum value of the two directions
        total_value_pos = prefix_sum_value[i+1] - prefix_sum_energy[i+1]
        total_value_neg = prefix_sum_value[N] - prefix_sum_value[i] - (prefix_sum_energy[N] - prefix_sum_energy[i])
        ans = max(ans, max(total_value_pos, total_value_neg))

    return ans

# Read input
N, C = map(int, input().split())
X = []
V = []
for _ in range(N):
    x, v = map(int, input().split())
    X.append(x)
    V.append(v)

# Solve the problem
result = solve(N, C, X, V)

# Print the result
print(result)