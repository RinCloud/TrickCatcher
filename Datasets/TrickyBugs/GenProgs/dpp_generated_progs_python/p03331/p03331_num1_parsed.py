# PROGRAM

def min_sum_of_digits(N):
    # initialize with maximum possible value
    min_sum = float('inf')

    # check all possible values of A from 1 to N-1
    for A in range(1, N):
        # calculate B from A and N
        B = N - A

        # calculate sum of digits of A and B
        sum_of_digits = sum([int(digit) for digit in str(A)]) + sum([int(digit) for digit in str(B)])

        # update min_sum if necessary
        if sum_of_digits < min_sum:
            min_sum = sum_of_digits

    return min_sum


# taking input from the user
N = int(input())

# calling the function and printing the result
print(min_sum_of_digits(N))