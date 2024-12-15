N = int(input())
strings = []
for _ in range(N):
    strings.append(input())

pair_count = 0
string_counts = {}
for string in strings:
    sort_string = ''.join(sorted(string))
    if sort_string in string_counts:
        pair_count += string_counts[sort_string]
        string_counts[sort_string] += 1
    else:
        string_counts[sort_string] = 1

print(pair_count)