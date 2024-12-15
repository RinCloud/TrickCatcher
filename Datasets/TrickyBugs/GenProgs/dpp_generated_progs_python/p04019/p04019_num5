def is_possible_to_return_home(s):
    if len(s) % 2 == 1:
        return "No"
    directions = {'N': 0, 'W': 0, 'S': 0, 'E': 0}
    for direction in s:
        directions[direction] += 1
    if directions['N'] != directions['S'] or directions['W'] != directions['E']:
        return "No"
    return "Yes"

s = input()
print(is_possible_to_return_home(s))