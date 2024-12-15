# Program to find the minimum value of F(A,B) given N

def min_value_of_f(N):
    # Initialize the minimum value of F(A, B) to infinity
    min_val = float('inf')
    
    # Loop through all possible divisors of N
    for i in range(1, int(N**0.5) + 1):
        if N % i == 0:
            # Calculate the number of digits in the decimal notation of A and B
            A_digits = len(str(i))
            B_digits = len(str(N // i))
            
            # Update the minimum value of F(A, B) if necessary
            min_val = min(min_val, max(A_digits, B_digits))
    
    return min_val

# Read the input number N
N = int(input())

# Find the minimum value of F(A, B) given N
result = min_value_of_f(N)

# Print the minimum value of F(A, B)
print(result)