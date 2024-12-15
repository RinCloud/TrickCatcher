import sys

def digit_sum(n):
    sum_digits = 0
    while n > 0:
        sum_digits += n % 10
        n //= 10
    return sum_digits

def find_sum(n, a, b):
    total = 0
    for i in range(1, n+1):
        sum_digits = digit_sum(i)
        if a <= sum_digits <= b:
            total += i
    return total

def main():
    # Read input
    input_data = sys.stdin.readline().strip().split()
    n = int(input_data[0])
    a = int(input_data[1])
    b = int(input_data[2])

    # Find sum
    result = find_sum(n, a, b)

    # Print result
    sys.stdout.write(str(result))

if __name__ == "__main__":
    main()