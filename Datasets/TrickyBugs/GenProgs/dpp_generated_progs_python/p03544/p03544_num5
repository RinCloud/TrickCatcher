# Taking input from the user
N = int(input())

# Initializing the first two Lucas numbers
L0 = 2
L1 = 1

# Calculating the N-th Lucas number
if N == 0:
    Lucas_number = L0
elif N == 1:
    Lucas_number = L1
else:
    for i in range(2, N + 1):
        Lucas_number = L0 + L1
        L0, L1 = L1, Lucas_number

# Printing the N-th Lucas number
print(Lucas_number)