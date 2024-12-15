from collections import Counter

n = int(input())
strings = [input() for _ in range(n)]

common_chars = Counter(strings[0])

for s in strings[1:]:
    common_chars &= Counter(s)

common_str = ''.join(sorted(common_chars.elements()))

print(common_str)