def can_communicate(a, b, c, d):
    if abs(a - c) <= d:
        return "Yes"
    elif abs(a - b) <= d and abs(b - c) <= d:
        return "Yes"
    else:
        return "No"


a, b, c, d = map(int, input().split())
result = can_communicate(a, b, c, d)
print(result)