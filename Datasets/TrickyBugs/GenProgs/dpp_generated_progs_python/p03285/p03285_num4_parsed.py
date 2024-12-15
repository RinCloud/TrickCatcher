# Program:

n = int(input())

# check for all possible combinations
for cakes in range(n // 4 + 1):
    for doughnuts in range(n // 7 + 1):
        if cakes * 4 + doughnuts * 7 == n:
            print("Yes")
            exit()

# no possible combination found
print("No")