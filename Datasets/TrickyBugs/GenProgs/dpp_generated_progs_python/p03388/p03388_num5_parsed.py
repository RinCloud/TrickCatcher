import math

Q = int(input())
queries = []
for _ in range(Q):
    A, B = map(int, input().split())
    queries.append((A, B))

for A, B in queries:
    max_participants = (A - 1) * (B - 1)
    print(max_participants)