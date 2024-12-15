'''
# Taking input
X, Y, Z = map(int, input().split())

# Calculating the maximum number of people that can sit
max_people = (X - Z) // (Y + Z)

# Printing the output
print(max_people)
'''