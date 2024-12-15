def is_square_number(a, b):
    number = int(str(a) + str(b))
    if number == int(number ** 0.5) ** 2:
        return "Yes"
    else:
        return "No"

a, b = map(int, input().split())
print(is_square_number(a, b))