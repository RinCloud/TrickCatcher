X, Y, Z = map(int, input().split())

max_people = (X - Z) // (Y + Z)

print(max_people)