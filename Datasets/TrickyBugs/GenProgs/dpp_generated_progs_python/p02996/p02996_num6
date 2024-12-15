N = int(input())
jobs = []
for _ in range(N):
    a, b = map(int, input().split())
    jobs.append((a, b))

jobs.sort(key=lambda x: x[1])

current_time = 0
for job in jobs:
    a, b = job
    if current_time + a > b:
        print("No")
        break
    current_time += a
else:
    print("Yes")