def calculate_time_to_solve_problems(N, T, M, drinks):
    results = []
    for i in range(M):
        P, X = drinks[i]
        total_time = sum(T) - T[P-1] + X
        results.append(total_time)
    return results

# Read input
N = int(input())
T = list(map(int, input().split()))
M = int(input())
drinks = []
for _ in range(M):
    P, X = map(int, input().split())
    drinks.append((P, X))

# Calculate and print results
results = calculate_time_to_solve_problems(N, T, M, drinks)
for result in results:
    print(result)