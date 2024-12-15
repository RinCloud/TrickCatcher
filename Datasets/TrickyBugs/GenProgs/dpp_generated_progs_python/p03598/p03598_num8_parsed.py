N = int(input())
K = int(input())
x = list(map(int, input().split()))

distance = 0

for i in range(N):
    distance += min(x[i], K - x[i]) * 2
    
print(distance)