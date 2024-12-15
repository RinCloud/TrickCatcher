Q = int(input())

for _ in range(Q):
    A, B = map(int, input().split())

    max_participants = min(A-1, B-1) + min(Q-A, Q-B) + min(A-1, Q-B) + min(Q-A, B-1)

    print(max_participants)