# Program:

S = input()

cost = 700
for char in S:
    if char == 'o':
        cost += 100

print(cost)