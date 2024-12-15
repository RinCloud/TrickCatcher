x = int(input())

if x <= 6:
    print(1)
else:
    min_operations = x // 11 * 2
    remaining_points = x % 11

    if remaining_points == 0:
        print(min_operations)
    elif remaining_points <= 6:
        print(min_operations + 1)
    else:
        print(min_operations + 2)