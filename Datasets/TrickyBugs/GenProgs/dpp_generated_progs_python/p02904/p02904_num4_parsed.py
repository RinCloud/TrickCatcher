import sys

def main():
    # Read input from stdin
    n, k = map(int, input().split())
    p = list(map(int, input().split()))

    # Initialize a count variable to keep track of the number of permutations that can be produced
    count = 0

    # Iterate through each possible starting index for the consecutive elements
    for i in range(n - k + 1):
        # Get the consecutive elements starting from index i
        sub_array = p[i:i + k]

        # Check if the subarray is sorted in ascending order
        if sorted(sub_array) == sub_array:
            count += 1

    # Print the count
    print(count)

if __name__ == "__main__":
    main()