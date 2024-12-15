# Program to find the Nth Lucas number

def nth_lucas_number(N):
    # Initialize the first two Lucas numbers
    lucas_0 = 2
    lucas_1 = 1

    # Find the Nth Lucas number by iterating N-1 times
    for i in range(2, N+1):
        lucas_i = lucas_0 + lucas_1
        lucas_0 = lucas_1
        lucas_1 = lucas_i

    return lucas_1


N = int(input()) # Read the input N
result = nth_lucas_number(N) # Find the Nth Lucas number
print(result) # Print the result