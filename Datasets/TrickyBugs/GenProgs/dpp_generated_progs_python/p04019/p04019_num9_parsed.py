def is_possible_to_reach_home(s):
    x = 0
    y = 0
    for ch in s:
        if ch == 'N':
            y += 1
        elif ch == 'W':
            x -= 1
        elif ch == 'S':
            y -= 1
        elif ch == 'E':
            x += 1

    if x == 0 and y == 0:
        return "Yes"
    else:
        return "No"

s = input()
result = is_possible_to_reach_home(s)
print(result)