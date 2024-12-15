# Program

def max_earning(N, a):
    earnings = 0
    
    # Iterate over all possible values of x
    for x in range(1, N+1):
        # Smash all gems labeled with multiples of x
        for i in range(x, N+1, x):
            # Check if the gem labeled i remains
            if a[i-1] > 0:
                # Earn yen from the remaining gem
                earnings += a[i-1]
    
    return earnings


# Read input from Standard Input
N = int(input())
a = list(map(int, input().split()))

# Call the function and print the result
print(max_earning(N, a))