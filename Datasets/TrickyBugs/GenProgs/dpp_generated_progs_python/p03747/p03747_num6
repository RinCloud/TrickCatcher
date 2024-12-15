"""
# Function to solve the problem
def find_ant_positions(N, L, T, ants):
    # List to store the final positions of the ants
    final_positions = []

    # Iterate over each ant
    for i in range(N):
        # Get the initial position and direction of the ant
        ant_position, ant_direction = ants[i]

        # Calculate the displacement based on the time and direction of the ant
        displacement = T if ant_direction == 1 else -T

        # Calculate the final position of the ant considering the circular nature
        final_position = (ant_position + displacement) % L

        # Add the final position to the list
        final_positions.append(final_position)

    # Return the list of final positions
    return final_positions

# Read the input values
N, L, T = map(int, input().split())

# List to store the ants' positions and directions
ants = []

# Read the positions and directions of the ants
for _ in range(N):
    ant_position, ant_direction = map(int, input().split())
    ants.append((ant_position, ant_direction))

# Find the final positions of the ants
final_positions = find_ant_positions(N, L, T, ants)

# Print the final positions of the ants
for position in final_positions:
    print(position)
"""