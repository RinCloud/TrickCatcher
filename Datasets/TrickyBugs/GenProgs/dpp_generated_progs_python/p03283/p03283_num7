def count_trains(N, M, Q, trains, queries):
    # Create an array to store the count of trains for each query
    count = [0] * Q
    
    # Iterate through each query
    for i in range(Q):
        p, q = queries[i]
        
        # Iterate through each train
        for j in range(M):
            l, r = trains[j]
            
            # Check if the train runs strictly within the section from City p to City q
            if p <= l and r <= q:
                count[i] += 1
    
    # Return the count of trains for each query
    return count

# Read input
N, M, Q = map(int, input().split())

# Read the lists of trains
trains = [list(map(int, input().split())) for _ in range(M)]

# Read the queries
queries = [list(map(int, input().split())) for _ in range(Q)]

# Call the function and print the output
output = count_trains(N, M, Q, trains, queries)
for count in output:
    print(count)