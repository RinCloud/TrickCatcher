import sys

def get_digit_sum(n):
    sum = 0
    while n > 0:
        sum += n % 10
        n //= 10
    return sum

def main():
    # Read input values
    n, a, b = map(int, sys.stdin.readline().split())
    
    # Calculate the sum of the integers that meet the condition
    total_sum = 0
    for num in range(1, n+1):
        digit_sum = get_digit_sum(num)
        if a <= digit_sum <= b:
            total_sum += num
    
    # Print the result
    print(total_sum)

if __name__ == "__main__":
    main()