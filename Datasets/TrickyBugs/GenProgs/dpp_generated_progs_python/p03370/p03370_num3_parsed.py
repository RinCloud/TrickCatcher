# Program

N, X = map(int, input().split())
m = [int(input()) for _ in range(N)]

min_moto = min(m)
max_doughnuts = (X // min_moto)

for doughnut in m:
    max_doughnuts += (doughnut - min_moto) // min_moto

print(max_doughnuts)