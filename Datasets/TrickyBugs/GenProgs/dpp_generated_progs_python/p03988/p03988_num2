'''
from queue import Queue

# Function to check if a tree can be constructed or not
def construct_tree(N, a):
    # Create a list to keep track of the degree of each vertex
    degree = [0] * N

    # Calculate the sum of all the elements in the array
    total_sum = sum(a)

    # Check if the total sum is less than 2 * (N - 1)
    if total_sum > 2 * (N - 1):
        return "Impossible"

    # Create an empty queue
    q = Queue(maxsize=N)

    # Initialize the queue with the indices of the elements
    for i in range(N):
        q.put(i)

    # Loop until the queue is empty
    while not q.empty():
        # Get the index of the current element
        node = q.get()

        # Check if the degree of the current element is equal to its value
        if degree[node] == a[node]:
            continue

        # Calculate the remaining capacity for the current element
        remaining_capacity = a[node] - degree[node]

        # Loop through all the other elements
        for i in range(N):
            if node == i:
                continue

            # Check if the remaining capacity is zero
            if remaining_capacity == 0:
                break

            # Check if the degree of the other element is equal to its value
            if degree[i] == a[i]:
                continue

            # Increase the degree of the current element
            degree[node] += 1

            # Increase the degree of the other element
            degree[i] += 1

            # Decrease the remaining capacity
            remaining_capacity -= 1

            # Add the other element to the queue
            q.put(i)

    # Check if all the degrees are equal to the values
    for i in range(N):
        if degree[i] != a[i]:
            return "Impossible"

    return "Possible"

# Read the input values
N = int(input())
a = list(map(int, input().split()))

# Call the function to check if a tree can be constructed or not
result = construct_tree(N, a)

# Print the result
print(result)
'''