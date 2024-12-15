import sys

def main():
    # Read N from input
    N = int(sys.stdin.readline().strip())

    # Read the list of integers
    a = list(map(int, sys.stdin.readline().strip().split()))

    # Set an initial maximum value of f
    max_f = 0

    # Iterate through all possible m values
    for m in range(max(a)):
        f_m = sum(m % ai for ai in a)
        # Update the maximum value of f if f_m is greater
        max_f = max(max_f, f_m)

    # Print the maximum value of f
    print(max_f)

if __name__ == '__main__':
    main()