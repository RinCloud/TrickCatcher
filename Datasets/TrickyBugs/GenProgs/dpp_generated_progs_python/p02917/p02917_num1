import sys

def main():
    # Read the input
    n = int(sys.stdin.readline())
    b = list(map(int, sys.stdin.readline().split()))

    # Initialize the sum of A to 0
    a_sum = 0
    
    # Iterate through the elements of B
    for i in range(n-1):
        # Calculate the maximum value in A for this element of B
        a = max(b[i], b[i+1])
        # Add the maximum value of A to the sum
        a_sum += a
    
    # Print the maximum possible sum of the elements of A
    print(a_sum)

if __name__ == "__main__":
    main()