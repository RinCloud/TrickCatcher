import sys

def calculate_digit_sum(n):
    digit_sum = 0
    while n > 0:
        digit_sum += n % 10
        n //= 10
    return digit_sum

def calculate_sum_of_digits(n, a, b):
    total_sum = 0
    for i in range(1, n+1):
        digit_sum = calculate_digit_sum(i)
        if a <= digit_sum <= b:
            total_sum += i
    return total_sum

def main():
    # Read inputs from standard input
    input_data = sys.stdin.readline().strip().split()
    n = int(input_data[0])
    a = int(input_data[1])
    b = int(input_data[2])

    # Calculate the sum of the integers
    sum_of_digits = calculate_sum_of_digits(n, a, b)

    # Print the result
    print(sum_of_digits)

if __name__ == "__main__":
    main()