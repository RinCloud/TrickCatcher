def smallest_sum_of_digits(K):
    # Initialize variables
    n = 1
    smallest_sum = float('inf')
    
    # Iterate until finding the smallest sum
    while True:
      
        # Calculate the sum of digits in decimal notation
        sum_of_digits = sum(int(digit) for digit in str(K * n))
        
        # Update the smallest sum
        if sum_of_digits < smallest_sum:
            smallest_sum = sum_of_digits
        
        # Check if the smallest sum is achieved
        if smallest_sum <= 1:
            break
        
        # Increment the number for next iteration
        n += 1
    
    # Print the smallest sum of digits
    print(smallest_sum)

# Main code
K = int(input())
smallest_sum_of_digits(K)