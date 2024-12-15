import math

A, B, N = map(int, input().split())

result = 0
for x in range(N+1):
    temp = math.floor(A*x/B) - A*math.floor(x/B)
    if temp > result:
        result = temp

print(result)