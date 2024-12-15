import sys

def main():
    # Read the input
    n = int(sys.stdin.readline().strip())
    a = list(map(int, sys.stdin.readline().strip().split()))

    # Initialize the count to 0
    count = 0
    
    # Repeat the operation until no more operations can be performed
    while True:
        # Check if any operations can be performed
        can_perform_operation = False

        # Perform the operation for every element in the sequence
        for i in range(n):
            if a[i] % 2 == 0:
                # Perform the "divide by 2" operation
                a[i] //= 2
                count += 1
                can_perform_operation = True
        
        # Break the loop if no more operations can be performed
        if not can_perform_operation:
            break

    # Print the maximum number of operations
    print(count)

if __name__ == "__main__":
    main()