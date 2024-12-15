# Here is one way to solve this problem:

# Read the input value of N
N = int(input())

# Initialize the flag variable to False
found_solution = False

# Try all possible combinations of doughnuts and cakes
for num_doughnuts in range(0, (N // 7) + 1):
    for num_cakes in range(0, (N // 4) + 1):
        # Check if the total cost matches the desired amount N
        if (7 * num_doughnuts) + (4 * num_cakes) == N:
            found_solution = True
            break
    if found_solution:  # Break from the outer loop if a solution is found
        break

# Print the result
if found_solution:
    print("Yes")
else:
    print("No")