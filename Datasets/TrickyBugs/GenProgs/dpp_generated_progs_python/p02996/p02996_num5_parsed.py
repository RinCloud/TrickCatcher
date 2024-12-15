# Program

n = int(input())
jobs = []
for _ in range(n):
    a, b = map(int, input().split())
    jobs.append((a, b))

jobs.sort(key=lambda x: x[1])

time = 0
for a, b in jobs:
    if time + a <= b:
        time += a
    else:
        print('No')
        exit()

print('Yes')