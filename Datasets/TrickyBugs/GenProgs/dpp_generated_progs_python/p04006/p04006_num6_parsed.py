N, x = map(int, input().split())
a = list(map(int, input().split()))

total_time = sum(a)

for i in range(N - 1):
    time_with_spell = x * (i + 1) + total_time
    min_time = min(min_time, time_with_spell)

print(min_time)