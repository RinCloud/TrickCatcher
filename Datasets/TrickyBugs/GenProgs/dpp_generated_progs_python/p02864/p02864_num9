N, K = map(int, input().split())
H = list(map(int, input().split()))


def min_operations(N, K, H):
    # Calculate the maximum height in each column
    max_heights = [0] * N
    for i in range(N):
        max_heights[i] = max(H[i:])

    # Sort the columns in descending order of maximum height
    sorted_columns = sorted(range(N), key=lambda x: max_heights[x], reverse=True)

    # Initialize the total number of operations
    total_operations = 0

    # Perform the operations
    for i in range(K):
        # Calculate the number of operations required for the current column
        num_operations = max_heights[sorted_columns[i]]

        # Update the maximum height for the remaining columns
        for j in range(i + 1, N):
            max_heights[sorted_columns[j]] = max(max_heights[sorted_columns[j]], max_heights[sorted_columns[i]])

        # Update the total number of operations
        total_operations += num_operations

    return total_operations


print(min_operations(N, K, H))