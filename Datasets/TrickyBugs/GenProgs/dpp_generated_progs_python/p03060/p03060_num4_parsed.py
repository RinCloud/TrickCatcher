N = int(input())
V = list(map(int, input().split()))
C = list(map(int, input().split()))

max_value = 0

for i in range(N):
    value = V[i] - C[i]
    if value > 0:
        max_value += value

print(max_value)
