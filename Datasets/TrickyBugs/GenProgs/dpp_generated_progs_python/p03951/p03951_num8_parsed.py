# Getting input from the user
N = int(input())
s = input()
t = input()

# Finding the length of the shortest string that satisfies the conditions
length = 2 * N - len(set(s) & set(t))

# Printing the result
print(length)