# Program to find the minimum sum of digits of A and B

def min_sum_of_digits(N):
    min_sum = float('inf')

    # Iterate through all possible values of A from 1 to N-1
    for A in range(1, N):
        B = N - A

        # Calculate the sum of digits for A and B
        sum_of_digits = sum(map(int, str(A))) + sum(map(int, str(B)))

        # Update the minimum sum if necessary
        if sum_of_digits < min_sum:
            min_sum = sum_of_digits

    return min_sum

# Read input N
N = int(input())

# Call the function and print the result
print(min_sum_of_digits(N))