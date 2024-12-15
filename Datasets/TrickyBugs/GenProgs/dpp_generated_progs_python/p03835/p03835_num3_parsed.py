# Program to count the number of different assignments of values to X, Y and Z such that X + Y + Z = S

# Reading the input values of K and S
K, S = map(int, input().split())

# Variable to count the number of valid triples
count = 0

# Looping through all possible assignments of values to X, Y and Z
for X in range(K+1):
    for Y in range(K+1):
        for Z in range(K+1):
            # Checking if the sum of X, Y and Z is equal to S
            if X + Y + Z == S:
                count += 1

# Printing the result
print(count)