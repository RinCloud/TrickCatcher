def bitwise_and_operation(N, M, K, S, T):
    # Converting strings to integers
    X = int(S, 2)
    Y = int(T, 2)

    # Repeating the operation K times
    for _ in range(K):
        # Compute bitwise AND
        Z = X & Y

        # Add Z to X and Y
        X += Z
        Y += Z

    # Converting integers back to binary strings
    res_X = bin(X)[2:]
    res_Y = bin(Y)[2:]

    # Adding leading '1' if necessary
    res_X = '1' + '0' * (N - len(res_X)) + res_X
    res_Y = '1' + '0' * (M - len(res_Y)) + res_Y

    return res_X, res_Y


# Read input
N, M, K = map(int, input().split())
S = input()
T = input()

# Call the function and print the output
result_X, result_Y = bitwise_and_operation(N, M, K, S, T)
print(result_X)
print(result_Y)