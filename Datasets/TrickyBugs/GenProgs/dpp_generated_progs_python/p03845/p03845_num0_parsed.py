# Reading inputs
N = int(input())
T = list(map(int, input().split()))
M = int(input())
drinks = []
for _ in range(M):
    drinks.append(list(map(int, input().split())))

# Calculating the time for each drink
for p, x in drinks:
    total_time = sum(T)
    total_time -= T[p-1]  # Subtracting the original time for problem P
    total_time += x       # Adding the new time X
    print(total_time)