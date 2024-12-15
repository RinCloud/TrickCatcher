def maximized_sum():
    N = int(input())
    A = list(map(int, input().split()))

    neg_count = 0
    min_abs_value = float('inf')
    total_sum = 0

    for i in range(N):
        abs_value = abs(A[i])
        total_sum += abs_value

        # Count the number of negative values
        if A[i] < 0:
            neg_count += 1

        # Find the minimum absolute value
        min_abs_value = min(min_abs_value, abs_value)

    # If the number of negatives is even, no operations are needed
    # If the number of negatives is odd, one negative value needs to be turned positive
    if neg_count % 2 == 1:
        # Subtract double the minimum absolute value from the total sum
        total_sum -= 2 * min_abs_value

    print(total_sum)


if __name__ == '__main__':
    maximized_sum()