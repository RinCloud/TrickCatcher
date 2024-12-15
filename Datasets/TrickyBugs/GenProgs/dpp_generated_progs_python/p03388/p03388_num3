# Here is the complete program to solve the given problem:

Q = int(input())
queries = []

# Read all the queries
for _ in range(Q):
    A, B = map(int, input().split())
    queries.append((A, B))

# Process each query
for A, B in queries:
    max_participants = min(A*B-1, A+B-2)
    print(max_participants)