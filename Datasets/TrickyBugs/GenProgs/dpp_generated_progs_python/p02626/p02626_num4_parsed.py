def minimum_stones(n, piles):
    # Determine the minimum number of stones to move to guarantee Takahashi's win
    # If the first pile has fewer stones than the second pile, return -1
    if piles[0] < piles[1]:
        return -1
    
    # Calculate the total number of stones
    total_stones = sum(piles)
    
    # Calculate the maximum number of stones that can be moved from the first pile
    max_stones_to_move = piles[0] - 1
    
    # Calculate the minimum number of stones that need to be moved to guarantee Takahashi's win
    min_stones_to_move = total_stones - max_stones_to_move
    
    return min_stones_to_move


# Read the input
n = int(input())
piles = list(map(int, input().split()))

# Calculate and print the minimum number of stones to move to guarantee Takahashi's win
print(minimum_stones(n, piles))
