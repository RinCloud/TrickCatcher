def count_pairs(S):
    # Initialize the count
    count = 0

    # Iterate over all possible pairs (i, j)
    for i in range(len(S)):
        for j in range(i, len(S)):
            # Extract the substring from i to j
            substring = S[i:j+1]

            # Convert the substring to an integer
            num = int(substring)

            # Check if the integer is divisible by 2019
            if num % 2019 == 0:
                count += 1

    return count


# Read the input string
S = input()

# Call the count_pairs function and print the result
print(count_pairs(S))
