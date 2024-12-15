import numpy as np

N, M = map(int, input().split())
A = [list(map(int, input().split())) for _ in range(N)]

max_participants = 0
for sport in range(1, M+1):
    participants = np.count_nonzero(np.array(A) == sport) # count number of participants for each sport
    max_participants = max(max_participants, participants) # update max_participants if needed

print(max_participants)