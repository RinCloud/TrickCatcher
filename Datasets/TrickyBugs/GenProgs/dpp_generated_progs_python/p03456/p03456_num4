# Program:

import math

def is_square(num):
    sqrt = math.sqrt(num)
    return sqrt.is_integer()

def check_square(a, b):
    # Convert a and b to strings
    a_str = str(a)
    b_str = str(b)
    
    # Concatenate a and b
    concatenated = int(a_str + b_str)
    
    # Check if the concatenated number is a square
    if is_square(concatenated):
        print("Yes")
    else:
        print("No")

# Read input values
a, b = map(int, input().split())

# Check if the concatenation of a and b is a square
check_square(a, b)