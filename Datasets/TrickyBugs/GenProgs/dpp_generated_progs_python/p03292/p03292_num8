def minimum_total_cost(A: list[int]) -> int:
    A.sort()  # Sort the tasks in ascending order of their costs
    min_cost = float('inf')  # Initialize the minimum cost as infinity

    # Try completing each task as the first task
    for i in range(3):
        cost = 0  # Initialize the cost as 0 for each starting task
        prev_task = i  # Store the index of the previous completed task

        # Calculate the cost of completing all the tasks
        for j in range(3):
            cost += abs(A[j] - A[prev_task])  # Add the cost of the current task
            prev_task = j  # Update the index of the previous completed task

        min_cost = min(min_cost, cost)  # Update the minimum cost

    return min_cost


# Read the input values
A = list(map(int, input().split()))

# Calculate and print the minimum total cost required to complete all the tasks
print(minimum_total_cost(A))