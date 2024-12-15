# Read input values
N = int(input())
T = list(map(int, input().split()))
M = int(input())

# Loop through each drink
for _ in range(M):
    P, X = map(int, input().split())
    total_time = sum(T) - T[P-1] + X
    print(total_time)