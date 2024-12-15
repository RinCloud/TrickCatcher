# To solve the problem, we need to find the minimum possible value of (i * j) mod 2019, where L <= i < j <= R.

# Let's start by defining the function to calculate the minimum possible value.

def min_possible_value(L, R):
    min_value = float('inf')
    for i in range(L, R):
        for j in range(i+1, R+1):
            value = (i * j) % 2019
            if value < min_value:
                min_value = value
    return min_value

# Reading the input
L, R = map(int, input().split())

# Calculating and printing the minimum possible value
print(min_possible_value(L, R))