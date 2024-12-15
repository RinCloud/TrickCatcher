# Function to calculate the new position of ants after T seconds
def calculate_new_position(N, L, T, ants):
    # Convert the initial direction to clockwise (1) or counterclockwise (2)
    directions = {1: -1, 2: 1}

    # Convert the coordinate of each ant to a list of tuples (coordinate, index)
    ant_positions = [(coord, index) for index, (coord, _) in enumerate(ants)]
    ant_positions.sort()

    # Helper function to check if two ants will collide
    def will_collide(a1, a2):
        return (a1[1] > a2[1] and a1[0] - a2[0] <= T) or (a2[1] > a1[1] and a2[0] - a1[0] <= T)

    # Iterate through the ant positions and update their positions after T seconds
    for i in range(N):
        coord, index = ant_positions[i]
        direction = directions[ants[index][1]]
        new_coord = coord + (direction * T) % L  # Calculate new coordinate

        # Check for collisions with the next ant
        if i < N - 1 and will_collide(ant_positions[i], ant_positions[i + 1]):
            # Change direction and calculate new coordinate again
            direction *= -1
            new_coord = coord + (direction * T) % L

        # Check for collisions with the previous ant
        if i > 0 and will_collide(ant_positions[i], ant_positions[i - 1]):
            # Change direction and calculate new coordinate again
            direction *= -1
            new_coord = coord + (direction * T) % L

        # Update the position of the ant in the list
        ant_positions[i] = (new_coord, index)

    # Sort the ants back to their original order
    ant_positions.sort(key=lambda x: x[1])

    # Return the final coordinates of the ants
    return [coord for coord, _ in ant_positions]


# Read the input values
N, L, T = map(int, input().split())
ants = [tuple(map(int, input().split())) for _ in range(N)]

# Calculate and print the new positions of the ants
new_positions = calculate_new_position(N, L, T, ants)
for position in new_positions:
    print(position)