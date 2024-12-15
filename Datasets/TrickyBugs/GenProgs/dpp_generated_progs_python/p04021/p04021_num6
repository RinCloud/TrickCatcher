import sys

def main():
    # Read input values
    n = int(input())
    a = []
    for i in range(n):
        a.append(int(input()))

    # Sort the sequence
    a_sorted = sorted(a)

    # Initialize count of operation 1
    count_operation1 = 0

    # Iterate through the sequence and count the number of operation 1 required
    for i in range(n):
        if a[i] != a_sorted[i]:
            count_operation1 += 1

    # Print the minimum number of operation 1
    print(count_operation1)

if __name__ == "__main__":
    main()