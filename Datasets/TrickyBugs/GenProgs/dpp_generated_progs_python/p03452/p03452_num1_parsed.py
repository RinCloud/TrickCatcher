def find_set_of_values(N, M, pieces_of_information):
    # Initialize distance array
    distances = [float('inf')] * (N+1)
    # Iterate through all pieces of information
    for i in range(M):
        L, R, D = pieces_of_information[i]
        # Update the distance between L and R
        distances[R] = min(distances[R], distances[L] + D)
        # Update the distance between R and L
        distances[L] = min(distances[L], distances[R] - D)
    # Check if there exists a set of values consistent with all given pieces of information
    for i in range(M):
        L, R, D = pieces_of_information[i]
        # Check if the difference between L and R matches the given distance
        if distances[R] - distances[L] != D:
            return 'No'
    return 'Yes'


# Read input
N, M = map(int, input().split())
pieces_of_information = []
for _ in range(M):
    pieces_of_information.append(list(map(int, input().split())))

# Find if there exists a set of values consistent with the given pieces of information
result = find_set_of_values(N, M, pieces_of_information)

# Print the result
print(result)