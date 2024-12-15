# Taking input
N = int(input())
S = input()

# Initializing count
count = 0

# Looping through the string
for i in range(N-2):
    # Checking if the three characters are 'A', 'B', 'C' respectively
    if S[i:i+3] == 'ABC':
        count += 1

# Printing the count
print(count)