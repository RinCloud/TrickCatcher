# Taking input
N = int(input())

# Setting initial flag
found = False

# Checking all possible combinations of cakes and doughnuts
for cakes in range(0, N + 1, 4):
    for doughnuts in range(0, N + 1, 7):
        # Checking if the total price equals N
        if cakes + doughnuts == N:
            found = True
            break

    if found:
        break

# Printing result
if found:
    print("Yes")
else:
    print("No")