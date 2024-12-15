N, M = map(int, input().split())
A = [list(map(int, input().split())) for _ in range(N)]

max_participants = 0

for j in range(M):
    count = 0
    for i in range(N):
        if A[i].index(j+1) == 0:
            count += 1
    max_participants = max(max_participants, count)

print(max_participants)