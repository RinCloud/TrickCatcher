N = int(input())
stones = list(input())

count = 0
i = 0
j = N - 1

while i < j:
    if stones[i] == 'W' and stones[j] == 'R':
        stones[i] = 'R'
        stones[j] = 'W'
        count += 1
    if stones[i] == 'R':
        i += 1
    if stones[j] == 'W':
        j -= 1

print(count)