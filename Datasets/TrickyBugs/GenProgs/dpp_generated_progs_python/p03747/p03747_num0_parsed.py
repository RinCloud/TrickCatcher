# importing the necessary libraries
import sys

# getting the input values from standard input
input_values = sys.stdin.readlines()

# extracting the values of N, L, and T
N, L, T = map(int, input_values[0].split())

# initializing a list to store the final positions of the ants
final_positions = []

# iterating over the ant positions and directions
for i in range(1, N+1):
    X, W = map(int, input_values[i].split())

    # calculating the displacement of the ant after T time units
    displacement = T % L if W == 1 else L - (T % L)

    # calculating the final position of the ant
    final_position = (X + displacement) % L

    # adding the final position to the list
    final_positions.append(final_position)

# printing the final positions of the ants
for position in final_positions:
    print(position)