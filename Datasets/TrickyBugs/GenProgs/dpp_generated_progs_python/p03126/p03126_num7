from collections import Counter


def find_common_foods(N, M, foods):
    # Count the frequency of each food
    food_counter = Counter(foods[0])
    
    for i in range(1, N):
        # Count the frequency of each food for the current person
        person_counter = Counter(foods[i])
        
        # Update the frequency of each food, keeping only the common ones
        food_counter = food_counter & person_counter
    
    # Return the number of common foods
    return len(food_counter)


# Read the inputs
N, M = map(int, input().split())
foods = [list(map(int, input().split()[1:])) for _ in range(N)]

# Call the function to find the common foods
result = find_common_foods(N, M, foods)

# Print the result
print(result)