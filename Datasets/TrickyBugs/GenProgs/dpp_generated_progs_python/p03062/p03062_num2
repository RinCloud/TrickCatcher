import sys

def main():
    # Read the input values
    n = int(sys.stdin.readline().strip())
    a = list(map(int, sys.stdin.readline().strip().split()))

    # Count the number of negative elements
    negative_count = sum(1 for x in a if x < 0)

    # Calculate the sum of absolute values of all elements
    sum_abs = sum(abs(x) for x in a)

    # If there are an odd number of negative elements, subtract the smallest absolute value twice
    if negative_count % 2 == 1:
        min_abs = min(abs(x) for x in a)
        sum_abs -= 2 * min_abs

    # Print the maximum possible value of B_1 + B_2 + ... + B_N
    print(sum_abs)

if __name__ == "__main__":
    main()