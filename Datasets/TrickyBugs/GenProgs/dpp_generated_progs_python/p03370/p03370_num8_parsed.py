# Getting input values
N, X = map(int, input().split())
moto = []
for i in range(N):
    moto.append(int(input()))

# Sorting the moto values in non-decreasing order
moto.sort()

# Making at least one doughnut of each kind
doughnuts = N

# Calculating the maximum number of doughnuts that can be made
for i in range(N):
    X -= moto[i]
    if X < 0:
        break
    doughnuts += 1

# Printing the result
print(doughnuts)