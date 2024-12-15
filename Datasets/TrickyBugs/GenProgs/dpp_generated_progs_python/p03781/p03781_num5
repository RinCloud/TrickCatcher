import math

def earliest_possible_time(X):
    position = 0
    time = 0
    
    while True:
        if position == X:
            return time
        
        time += 1
        position += time
        
        if position >= X and (position - X) % 2 == 0:
            return time

# Reading the input
X = int(input())

# Calling the function and printing the result
print(earliest_possible_time(X))