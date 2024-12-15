# Read the input values
X, Y, Z = map(int, input().split())

# Calculate the maximum number of people that can be seated
max_people = (X - Z) // (Y + Z)

# Print the result
print(max_people)