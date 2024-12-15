import math

def count_participants(Q, queries):
    for i in range(Q):
        A, B = queries[i]
        score = A * B
        max_participants = score - 1
        print(max_participants)

# Get input
Q = int(input())
queries = []
for _ in range(Q):
    A, B = map(int, input().split())
    queries.append((A, B))

# Process queries
count_participants(Q, queries)