# Reading input
N = int(input())
T = list(map(int, input().split()))
M = int(input())

# Calculating time with each drink
for _ in range(M):
    P, X = map(int, input().split())
    T_with_drink = T.copy()
    T_with_drink[P-1] = X
    total_time = sum(T_with_drink)
    print(total_time)