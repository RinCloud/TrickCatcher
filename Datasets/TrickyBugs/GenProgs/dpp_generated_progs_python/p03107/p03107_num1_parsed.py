# Getting the input
S = input()

# Initializing the count
count = 0

# Removing adjacent red and blue cubes
while '01' in S or '10' in S:
    count += 1
    S = S.replace('01', '', 1).replace('10', '', 1)

# Printing the maximum number of cubes that can be removed
print(count)