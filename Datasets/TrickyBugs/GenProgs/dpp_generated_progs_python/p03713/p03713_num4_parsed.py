# Program to solve the chocolate division problem

# Function to calculate the minimum possible value of S_{max} - S_{min}
def solve_chocolate_division(H, W):
    
    # For the case where H or W is less than or equal to 2, the minimum possible value of S_{max} - S_{min} is 0
    if H <= 2 or W <= 2:
        return 0
    
    # For the case where both H and W are odd, the minimum possible value of S_{max} - S_{min} is 1
    if H % 2 == 1 and W % 2 == 1:
        return 1
    
    # Calculate the minimum possible value of S_{max} - S_{min} when H and W are both even or one of them is even
    return min(H, W) // 2

# Get the input values
H, W = map(int, input().split())

# Call the function to get the result
result = solve_chocolate_division(H, W)

# Print the result
print(result)