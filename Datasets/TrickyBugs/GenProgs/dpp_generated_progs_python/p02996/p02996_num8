N = int(input())
jobs = []
for _ in range(N):
  a, b = map(int, input().split())
  jobs.append((a, b))

jobs.sort(key=lambda x: x[1])

time = 0
for job in jobs:
  a, b = job
  time += a
  if time > b:
    print("No")
    exit()

print("Yes")