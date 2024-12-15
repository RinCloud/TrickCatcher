# Program to reconstruct the order in which the students entered the classroom

# Function to reconstruct the order
def reconstruct_order(n, arr):
    # Create a list of size n
    order = [0] * n
    
    # Iterate over the input array
    for i in range(n):
        # Place the student number at the position based on the number of students in the classroom
        order[arr[i]-1] = i+1
        
    # Print the reconstructed order
    print(*order)

# Read the value of N
n = int(input())

# Read the student numbers
arr = list(map(int, input().split()))

# Call the function to reconstruct the order
reconstruct_order(n, arr)