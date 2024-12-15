N, M = map(int, input().split())
sports = []
for _ in range(N):
    sports.append(list(map(int, input().split())))

max_participants = 0
for i in range(1, M+1):
    participants = sum(1 for s in sports if i in s)
    max_participants = max(max_participants, participants)

print(max_participants)