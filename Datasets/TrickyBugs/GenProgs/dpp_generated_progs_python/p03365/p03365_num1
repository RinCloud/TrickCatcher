def sum_of_scores(N):
    mod = 10**9+7
    result = 0
    
    factorial = 1
    for i in range(1, N):
        factorial = (factorial * i) % mod
        result = result + factorial
    
    return result % mod


# Read the input from standard input
N = int(input())

# Call the sum_of_scores function and print the result
print(sum_of_scores(N))