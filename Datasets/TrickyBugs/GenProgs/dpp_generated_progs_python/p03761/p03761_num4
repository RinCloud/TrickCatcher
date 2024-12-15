n = int(input())
strings = []
for _ in range(n):
    strings.append(input())

common_chars = set(strings[0])
for string in strings[1:]:
    common_chars &= set(string)

common_chars = list(common_chars)
common_chars.sort()

if common_chars:
    print(''.join(common_chars))
else:
    print()