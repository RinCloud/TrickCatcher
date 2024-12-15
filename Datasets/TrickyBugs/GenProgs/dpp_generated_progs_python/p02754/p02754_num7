import math

def count_blue_balls(N, A, B):
    blue_balls = 0
    
    # Divide N by A+B to get the number of complete cycles
    complete_cycles = N // (A + B)
    
    # Multiply the number of blue balls in each cycle by the number of complete cycles
    blue_balls += complete_cycles * A
    
    # Calculate the remaining number of balls after the complete cycles
    remaining_balls = N % (A + B)
    
    # Add the number of blue balls in the remaining balls
    if remaining_balls >= A:
        blue_balls += A
    else:
        blue_balls += remaining_balls
    
    return blue_balls

# Read the input values
N, A, B = map(int, input().split())

# Call the function and print the output
print(count_blue_balls(N, A, B))