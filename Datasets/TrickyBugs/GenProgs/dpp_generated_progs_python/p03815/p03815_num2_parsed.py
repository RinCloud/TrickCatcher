x = int(input())

# If x <= 7, we can achieve x points in x-1 moves by just rotating the die to face the desired number
if x <= 7:
    print(x - 1)
else:
    # To achieve x points, we need at least (x-1)//7 moves
    # If the remaining points (x-1) % 7 is greater than or equal to 2, we need an extra move
    if (x - 1) % 7 >= 2:
        print((x - 1) // 7 + 1)
    else:
        print((x - 1) // 7)