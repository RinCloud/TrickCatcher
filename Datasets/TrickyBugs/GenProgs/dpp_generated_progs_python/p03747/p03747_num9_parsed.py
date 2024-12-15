import sys

def main():
    # Read input
    N, L, T = map(int, input().split())
    ants = []
    for _ in range(N):
        x, w = map(int, input().split())
        ants.append((x, w))
    
    # Compute the position of the ants after T seconds
    new_positions = [0] * N
    for i, (x, w) in enumerate(ants):
        # Compute the new position of the ant
        if w == 1:
            new_positions[i] = (x + T) % L
        else:
            new_positions[i] = (x - T) % L
    
    # Sort the ants positions in ascending order
    new_positions.sort()
    
    # Print the new positions
    for position in new_positions:
        print(position)

if __name__ == "__main__":
    main()