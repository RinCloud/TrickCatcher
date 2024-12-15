# PROGRAM

n = int(input())
jobs = []
for _ in range(n):
    a, b = map(int, input().split())
    jobs.append((a, b))

jobs.sort(key=lambda x: x[1])

current_time = 0
for a, b in jobs:
    if current_time + a <= b:
        current_time += a
    else:
        print("No")
        break
else:
    print("Yes")