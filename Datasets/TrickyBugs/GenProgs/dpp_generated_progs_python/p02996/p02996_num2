N = int(input())
jobs = []
for _ in range(N):
    A, B = map(int, input().split())
    jobs.append((A, B))

jobs.sort(key=lambda x: x[1])

current_time = 0
for A, B in jobs:
    current_time += A
    if current_time > B:
        print('No')
        break
else:
    print('Yes')