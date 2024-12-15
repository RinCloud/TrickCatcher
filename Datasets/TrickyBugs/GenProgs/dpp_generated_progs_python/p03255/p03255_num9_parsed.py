import sys


def main():
    N, X = map(int, sys.stdin.readline().split())
    x = list(map(int, sys.stdin.readline().split()))
    
    # Initialize prefix sum arrays
    left = [0] * (N+1)
    right = [0] * (N+1)
    
    # Calculate prefix sum of distances from the left
    for i in range(1, N+1):
        left[i] = left[i-1] + x[i-1]
    
    # Calculate prefix sum of distances from the right
    for i in range(N-1, -1, -1):
        right[i] = right[i+1] + (x[N-1] - x[i])
    
    # Initialize minimum energy to a large value
    min_energy = float('inf')
    
    # Iterate through all possible number of pieces of trash to carry
    for k in range(1, N+1):
        energy = 0
        
        # Calculate energy required to travel from left to right carrying k pieces of trash
        for i in range(k, N+1):
            energy += ((k+1)**2) * (x[i-1] - x[i-k-1])
        
        # Calculate energy required to travel from right to left carrying k pieces of trash
        for i in range(N-k, -1, -1):
            energy += ((k+1)**2) * (x[i+k-1] - x[i-1])
        
        # Calculate energy required to dump all the trash
        energy += k * X
        
        # Update minimum energy
        min_energy = min(min_energy, energy)
    
    # Print the minimum energy required
    print(min_energy)


if __name__ == "__main__":
    main()