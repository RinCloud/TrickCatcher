MOD = 10 ** 9 + 7

def count_strings(N, A, B):
    # create a string of length N with all zeroes
    x = "0" * N

    # create a list to store the counts of different strings
    counts = [0] * (N + 1)

    # initialize the count for x with all zeroes as 1
    counts[x.count("0")] = 1

    # iterate through all possible lengths of consecutive characters to replace with 0 or 1
    for length in range(A, N + 1):
        # iterate through all possible starting positions to replace A consecutive characters with 0
        for start in range(N - length + 1):
            # replace the consecutive characters with 0
            new_x = x[:start] + "0" * length + x[start + length:]

            # update the count for the new string
            counts[new_x.count("0")] += counts[x.count("0")]

    # iterate through all possible lengths of consecutive characters to replace with 0 or 1
    for length in range(B, N + 1):
        # iterate through all possible starting positions to replace B consecutive characters with 1
        for start in range(N - length + 1):
            # replace the consecutive characters with 1
            new_x = x[:start] + "1" * length + x[start + length:]

            # update the count for the new string
            counts[new_x.count("0")] += counts[x.count("0")]

    # return the final count modulo MOD
    return sum(counts) % MOD


# read the input
N, A, B = map(int, input().split())

# call the function to count the number of different strings
result = count_strings(N, A, B)

# print the result
print(result)