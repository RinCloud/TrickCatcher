N, M = map(int, input().split())
sports = []
for _ in range(N):
    sports.append(list(map(int, input().split())))

participants = [0] * M
for i in range(N):
    for j in range(M):
        participants[sports[i][j] - 1] += 1

min_participants = min(participants)
print(min_participants)