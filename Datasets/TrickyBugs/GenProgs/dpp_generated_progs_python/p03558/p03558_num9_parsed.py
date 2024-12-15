def smallest_sum_of_digits(K):
    # Initializing the minimum sum as infinity
    min_sum = float('inf')
    
    # Finding the range for the multiples of K
    for i in range(1, 10**5):
        # Calculating the sum of digits in the decimal notation of the multiple
        sum_of_digits = sum(int(digit) for digit in str(K*i))
        
        # Updating the minimum sum if the current sum is smaller
        if sum_of_digits < min_sum:
            min_sum = sum_of_digits
            
        # Exiting the loop if the sum becomes zero (smallest possible sum)
        if min_sum == 0:
            break
    
    return min_sum

# Reading the input
K = int(input())

# Printing the smallest possible sum of digits
print(smallest_sum_of_digits(K))