MOD = 1000000007

def count_possible_values(N, M, S, operations):
    # Create a list to store the number of possibilities for each position in S
    possibilities = [0] * N

    # Iterate through each operation
    for l, r in operations:
        # Create a new list to store the updated possibilities
        new_possibilities = [0] * N

        # Iterate through each position in S
        for i in range(N):
            # If the position is within the range specified by the operation
            if l - 1 <= i < r:
                # Update the possibilities by adding 1 to the current position
                new_possibilities[i] += 1

                # Iterate through each previous position
                for j in range(i):
                    # Update the possibilities by multiplying the current position's possibility
                    # with the previous position's possibility and adding it to the new position's possibility
                    new_possibilities[i] += possibilities[j] * new_possibilities[j]

                    # Take modulo to prevent overflow
                    new_possibilities[i] %= MOD

        # Update the possibilities with the new possibilities
        possibilities = new_possibilities

    # Calculate the total number of possibilities by summing all the possibilities
    total_possibilities = sum(possibilities)

    # Take modulo to prevent overflow
    total_possibilities %= MOD

    # Return the total number of possibilities
    return total_possibilities


# Read the input values
N, M = map(int, input().split())
S = input()
operations = [tuple(map(int, input().split())) for _ in range(M)]

# Count the number of possible values for S after the operations
result = count_possible_values(N, M, S, operations)

# Print the result
print(result)