import sys

def main():
    # Read N from input
    N = int(sys.stdin.readline().strip())

    # Read the integers from input
    A = list(map(int, sys.stdin.readline().strip().split()))

    # Keep track of the number of odd and even integers
    odd_count = 0
    even_count = 0

    # Calculate the number of odd and even integers
    for num in A:
        if num % 2 == 0:
            even_count += 1
        else:
            odd_count += 1

    # Check if it is possible to have only one integer on the blackboard
    if even_count % 2 == 0 or odd_count == N:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    main()