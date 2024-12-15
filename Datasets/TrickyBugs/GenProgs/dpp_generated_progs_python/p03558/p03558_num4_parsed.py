def find_smallest_sum(K):
    # Find the smallest possible multiple of K
    smallest_multiple = 0
    while smallest_multiple == 0:
        i = 1
        while True:
            if (K * i) % 10 == 0 or (K * i) % 10 == 1:
                smallest_multiple = K * i
                break
            i += 1

    # Calculate the sum of the digits
    sum_of_digits = 0
    for digit in str(smallest_multiple):
        sum_of_digits += int(digit)

    return sum_of_digits


# Get the input
K = int(input())

# Call the function and print the result
print(find_smallest_sum(K))