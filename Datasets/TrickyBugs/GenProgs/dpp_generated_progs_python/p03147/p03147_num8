# Program:

N = int(input())  # Get the number of flowers
h = list(map(int, input().split()))  # Get the heights of flowers

total_ops = 0  # Counter for total operations

for i in range(1, N):  # Loop through all flowers starting from the second one
    if h[i] < h[i-1]:  # Check if the current flower height is less than the previous one
        total_ops += h[i-1] - h[i]  # Add the difference in heights as operations
    
print(total_ops)  # Print the total number of operations