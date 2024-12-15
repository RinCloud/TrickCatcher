# Method to divide the chocolate evenly
def divide_chocolate(height, width):

    # If both dimensions are even, return 0 as difference
    if height % 2 == 0 and width % 2 == 0:
        return 0
    
    # If any dimension is odd, return 1 as difference
    return 1

# Read the input values
height, width = map(int, input().split())

# Call the divide_chocolate function and print the result
print(divide_chocolate(height, width))