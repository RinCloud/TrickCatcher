from typing import List

def ant_positions(N: int, L: int, T: int, ants: List[List[int]]) -> List[int]:
    positions = [0] * N
    
    for i, (X, W) in enumerate(ants):
        if W == 1:
            positions[i] = (X + T) % L
        else:
            positions[i] = (X - T) % L
        
    return positions

# Read the input
N, L, T = map(int, input().split())
ants = [list(map(int, input().split())) for _ in range(N)]

# Find the positions of the ants after T seconds
positions = ant_positions(N, L, T, ants)

# Print the positions
for position in positions:
    print(position)