def calculate_number_of_trains(N, M, Q, train_routes, queries):
    # Initialize a list to store the number of trains within each section
    train_count = []

    # Iterate over each query
    for query in queries:
        p, q = query

        # Initialize a counter for the number of trains
        count = 0

        # Iterate over each train route
        for route in train_routes:
            L, R = route

            # Check if the train route is within the given section
            if p <= L and R <= q:
                count += 1

        train_count.append(count)

    return train_count


# Read inputs
N, M, Q = map(int, input().split())

train_routes = []
for _ in range(M):
    L, R = map(int, input().split())
    train_routes.append((L, R))

queries = []
for _ in range(Q):
    p, q = map(int, input().split())
    queries.append((p, q))

# Calculate the number of trains within each section
result = calculate_number_of_trains(N, M, Q, train_routes, queries)

# Print the result
for count in result:
    print(count)