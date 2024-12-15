import math

N, X, T = map(int, input().split())

time_needed = math.ceil(N / X) * T

print(time_needed)