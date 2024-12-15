def count_substrings_divisible_by_p(N, P, S):
    # Initialize a count variable
    count = 0

    # Loop through each starting position of the substring
    for i in range(N):
        # Loop through each ending position of the substring
        for j in range(i, N):
            # Get the substring from i to j
            substring = S[i:j+1]

            # Convert the substring to an integer
            num = int(substring)

            # Check if the integer is divisible by P
            if num % P == 0:
                count += 1

    # Print the count
    print(count)


# Read the inputs
N, P = map(int, input().split())
S = input()

# Call the function
count_substrings_divisible_by_p(N, P, S)