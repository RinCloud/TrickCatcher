# Taking input from the user
N, A, B = map(int, input().split())

# Checking if the input is valid
if N == 1:
    if A == B:
        print(1)
    else:
        print(0)
else:
    # Calculating the number of possible sums
    min_sum = A * (N - 1) + B
    max_sum = B * (N - 1) + A
    num_sums = max_sum - min_sum + 1

    # Printing the result
    print(num_sums)