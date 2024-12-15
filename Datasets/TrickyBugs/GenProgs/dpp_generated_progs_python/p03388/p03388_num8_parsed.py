Q = int(input())
for _ in range(Q):
    A, B = map(int, input().split())
    max_participants = (A - 1) * (B - 1) // 2
    print(max_participants)