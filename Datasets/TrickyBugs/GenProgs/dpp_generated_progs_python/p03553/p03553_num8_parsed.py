# Program to find the maximum amount of money that can be earned

def find_maximum_money(N, gems):
    # Create a list of N+1 elements initialized to zero
    smashed = [0] * (N+1)
    
    # Iterate through all the gems
    for i in range(1, N+1):
        # If the gem is not smashed
        if smashed[i] == 0:
            # Count how many multiples of i can be formed
            multiples = N // i
            
            # Multiply the number of multiples by the value of the gem i
            gems[i] *= multiples
            
            # Smash all the gems labeled with multiples of i
            for j in range(2, multiples+1):
                smashed[j*i] = 1
    
    # Calculate the maximum amount of money that can be earned
    maximum_money = sum(gems)
    
    # Return the maximum amount of money
    return maximum_money


# Read the input values
N = int(input())
gems = list(map(int, input().split()))

# Find the maximum amount of money that can be earned
maximum_money = find_maximum_money(N, gems)

# Print the maximum amount of money
print(maximum_money)