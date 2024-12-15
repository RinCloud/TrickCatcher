def count_substrings_divisible(N, P, S):

    count = 0
    for i in range(N):
        for j in range(i, N):
            if int(S[i:j+1]) % P == 0:
                count += 1

    return count


# Read input from stdin
N, P = map(int, input().split())
S = input()

# Calculate the count of substrings divisible by P
result = count_substrings_divisible(N, P, S)

# Print the result
print(result)