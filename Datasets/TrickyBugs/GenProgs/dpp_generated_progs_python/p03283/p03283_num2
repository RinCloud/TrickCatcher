def process_queries(N, M, Q, trains, queries):
    # Initialize a 2D array to count trains within each section [i][j]
    count = [[0] * (N + 1) for _ in range(N + 1)]
    
    # Count trains within each section
    for train in trains:
        L, R = train
        count[L][R] += 1
    
    # Compute prefix sums for each section
    prefix_sums = [[0] * (N + 1) for _ in range(N + 1)]
    for i in range(1, N + 1):
        for j in range(1, N + 1):
            prefix_sums[i][j] = count[i][j] + prefix_sums[i][j - 1] + prefix_sums[i - 1][j] - prefix_sums[i - 1][j - 1]
    
    # Process each query and print the answer
    for query in queries:
        p, q = query
        answer = prefix_sums[q][q] - prefix_sums[q][p - 1] - prefix_sums[p - 1][q] + prefix_sums[p - 1][p - 1]
        print(answer)
    

# Read input
N, M, Q = map(int, input().split())
trains = []
for _ in range(M):
    L, R = map(int, input().split())
    trains.append((L, R))
queries = []
for _ in range(Q):
    p, q = map(int, input().split())
    queries.append((p, q))

# Process queries
process_queries(N, M, Q, trains, queries)