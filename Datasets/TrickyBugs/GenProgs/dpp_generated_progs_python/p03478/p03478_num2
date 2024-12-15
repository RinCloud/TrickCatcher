import sys

def sum_of_digits(n):
    """
    Function to calculate the sum of digits in base 10.
    """
    total = 0
    while n > 0:
        total += n % 10
        n //= 10
    return total

def main():
    # Read input from standard input
    n, a, b = map(int, sys.stdin.readline().strip().split())

    # Initialize the sum
    total_sum = 0

    # Iterate over the range 1 to N (inclusive)
    for i in range(1, n + 1):
        digit_sum = sum_of_digits(i)
        if a <= digit_sum <= b:
            total_sum += i

    # Print the result
    print(total_sum)

if __name__ == "__main__":
    main()