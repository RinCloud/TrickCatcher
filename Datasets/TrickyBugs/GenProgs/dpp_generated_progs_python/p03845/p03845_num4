import sys

# Read input values
N = int(input())
T = list(map(int, input().split()))
M = int(input())
drink_effects = []
for _ in range(M):
    P, X = map(int, input().split())
    drink_effects.append((P, X))

# Calculate the time it takes Joisino to solve all the problems for each drink
for drink in drink_effects:
    total_time = sum(T)
    P, X = drink
    total_time -= T[P-1]  # subtract the time for the problem for which the drink affects the solving time
    total_time += X  # add the new solving time after the drink
    print(total_time)