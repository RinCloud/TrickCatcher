def count_actions(a, b, c):
    e = a - b | b - c
    return len(bin(e & -e)) - 3 - (e == b & 1)

a, b, c = map(int, input().split())
print(count_actions(a, b, c))
