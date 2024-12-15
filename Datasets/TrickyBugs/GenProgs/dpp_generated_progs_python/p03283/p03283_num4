def count_trains(N, M, Q, train_routes, queries):
    # Create a list to keep track of the number of trains
    # running between each pair of cities
    city_counts = [[0] * (N+1) for _ in range(N+1)]
    
    # For each train route, increment the city_counts
    # for each pair of cities between L and R
    for L, R in train_routes:
        for i in range(L, R+1):
            for j in range(i, R+1):
                city_counts[i][j] += 1
    
    # For each query, sum up the counts of the train running
    # between p and q for each pair of cities
    result = []
    for p, q in queries:
        count = 0
        for i in range(p, q+1):
            for j in range(i, q+1):
                count += city_counts[i][j]
        result.append(count)
    
    return result


# Read the input from standard input
N, M, Q = map(int, input().split())
train_routes = [list(map(int, input().split())) for _ in range(M)]
queries = [list(map(int, input().split())) for _ in range(Q)]

# Call the count_trains function and print the result
result = count_trains(N, M, Q, train_routes, queries)
for count in result:
    print(count)