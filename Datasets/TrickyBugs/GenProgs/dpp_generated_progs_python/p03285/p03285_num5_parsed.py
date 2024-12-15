n = int(input())

possible = False

for num_cakes in range(n // 4 + 1):
    for num_doughnuts in range(n // 7 + 1):
        total = num_cakes * 4 + num_doughnuts * 7
        if total == n:
            possible = True
            break

if possible:
    print("Yes")
else:
    print("No")