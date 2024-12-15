def seat_people(X, Y, Z):
    gap = Y + 2*Z
    seats = (X - Z) // gap
    return seats

# Get input from user
X, Y, Z = map(int, input().split())

# Call the function and print the result
print(seat_people(X, Y, Z))