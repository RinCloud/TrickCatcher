# We can start by initializing the string variable `S` with the given input.
S = input().strip()

# Then, we read the number of operations `Q`.
Q = int(input())

# Loop through each query.
for _ in range(Q):
    # Read the operation type `T` and parse it as an integer.
    T = int(input().split()[0])

    # If the operation type is 1, we need to reverse the string.
    if T == 1:
        S = S[::-1]
    else:
        # If the operation type is 2, we need to read the additional integers `F` and `C`.
        F, C = input().split()

        # If `F` is 1, we add `C` to the beginning of the string `S`.
        if F == '1':
            S = C + S
        else:
            # If `F` is 2, we add `C` to the end of the string `S`.
            S = S + C

# Print the final string.
print(S)