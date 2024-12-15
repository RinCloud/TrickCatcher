# Function to calculate the minimum total stamina
def minimum_total_stamina(N, coordinates):
    # Initialize the minimum stamina as infinite
    min_stamina = float('inf')
    
    # Loop through all possible meeting coordinates
    for i in range(1, 101):
        # Calculate the stamina for each person at current meeting coordinate
        stamina = sum([(X - i)**2 for X in coordinates])
        
        # Update the minimum stamina if current stamina is lower
        if stamina < min_stamina:
            min_stamina = stamina
    
    return min_stamina

# Read the input
N = int(input())
coordinates = list(map(int, input().split()))

# Call the function and print the result
print(minimum_total_stamina(N, coordinates))