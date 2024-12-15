N = int(input())
strings = []
for _ in range(N):
    strings.append(input())

counts = {}
for string in strings:
    prefix = string[:2]
    if prefix in counts:
        counts[prefix] += 1
    else:
        counts[prefix] = 1

pairs = 0
for count in counts.values():
    pairs += count * (count - 1) // 2

print(pairs)