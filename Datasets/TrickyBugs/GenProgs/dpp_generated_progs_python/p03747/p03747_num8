import sys

def main():
    # Read input values
    N, L, T = map(int, sys.stdin.readline().split())

    # Create lists to store ant positions and directions
    positions = []
    directions = []

    # Read ant positions and directions
    for _ in range(N):
        position, direction = map(int, sys.stdin.readline().split())
        positions.append(position)
        directions.append(direction)

    # Determine the displacement for each ant after T seconds
    displacement = [0] * N
    for i in range(N):
        displacement[i] = (T * (-1 if directions[i] == 1 else 1)) % L

    # Calculate the final positions of the ants
    final_positions = [(positions[i] + displacement[i]) % L for i in range(N)]

    # Print the final positions
    for position in final_positions:
        print(position)

if __name__ == '__main__':
    main()