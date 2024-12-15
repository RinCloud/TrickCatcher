# Program to find the number of foods liked by all N people

# Read the input values
N, M = map(int, input().split())

# Create a set to store the first person's liked foods
liked_foods = set(range(1, M + 1))

# Iterate over the remaining N-1 people
for _ in range(N - 1):
    # Read the liked foods of the person
    K, *A = map(int, input().split())
    
    # Create a set with the liked foods of the person
    person_liked_foods = set(A)
    
    # Update the liked_foods set by finding the intersection with the person's liked foods
    liked_foods &= person_liked_foods

# Print the number of foods liked by all N people
print(len(liked_foods))