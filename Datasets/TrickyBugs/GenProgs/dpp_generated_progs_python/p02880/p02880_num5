# Taking input from the user
N = int(input())

# Flag variable to check if N can be represented as the product of two integers between 1 and 9 (inclusive)
found = False

# Iterate through all possible combinations of two integers between 1 and 9
for i in range(1, 10):
    for j in range(1, 10):
        # Check if the product of i and j is equal to N
        if i * j == N:
            found = True
            break

# Print the result ('Yes' if N can be represented as the product of two integers between 1 and 9, 'No' otherwise)
if found:
    print('Yes')
else:
    print('No')