# Plan
1. Create a list `distances` of size N+1 to store the distances between each pair of consecutive spots, including the starting and ending points at coordinate 0.
2. Initialize a variable `total_cost` to 0 to store the total cost of travel for the original plan.
3. Iterate over the spots from 1 to N (inclusive).
    - For each spot i, calculate the cost of travel for the original plan by adding the absolute difference between `A[i]` and `A[i-1]` to `total_cost`.
4. Iterate over the spots from 1 to N (inclusive) and calculate the total cost of travel when the visit to each spot is canceled.
    - For each spot i, subtract the absolute difference between `A[i]` and `A[i-1]` from `total_cost` and add it to the output list `canceled_costs`.
5. Print each cost from the `canceled_costs` list on a new line.

# Dry Run
## Input
    N = 3
    A = [3, 5, -1]
## Execution
    distances = [0, 2, 2, 6] (calculated based on the coordinates of the spots)
    total_cost = 10
    canceled_costs = []
    spot 1:
        total_cost = 10 + abs(5 - 3) = 12
    spot 2:
        total_cost = 12 + abs(-1 - 5) = 16
    spot 3:
        total_cost = 16 + abs(0 - (-1)) = 17
        canceled_cost = 16 + 6 = 22
        canceled_costs = [22]
    canceled_costs = [22]
## Output
    22