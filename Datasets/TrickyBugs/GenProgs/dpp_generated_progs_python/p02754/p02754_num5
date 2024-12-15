import math

def calculate_blue_balls(N, A, B):
    # If A is zero, there will be no blue balls in the row
    if A == 0:
        return 0
    
    # If B is zero, all the balls in the row will be blue
    if B == 0:
        return N
    
    # Calculate the number of complete rounds of (A + B) balls
    complete_rounds = N // (A + B)
    
    # Calculate the remaining balls after complete rounds
    remaining_balls = N % (A + B)
    
    # Calculate the number of blue balls in the remaining balls
    blue_balls = A * complete_rounds + min(A, remaining_balls)
    
    return blue_balls

# Read input from standard input
N, A, B = map(int, input().split())

# Calculate the number of blue balls
blue_balls = calculate_blue_balls(N, A, B)

# Print the result
print(blue_balls)