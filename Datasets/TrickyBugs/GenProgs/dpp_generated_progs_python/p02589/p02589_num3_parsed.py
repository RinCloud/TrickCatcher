N = int(input())
strings = []
for _ in range(N):
    strings.append(input())

count = 0
for i in range(N):
    for j in range(i + 1, N):
        if strings[i][:2] == strings[j][:2] or strings[i][:2] == strings[j][1:]:
            count += 1
        if strings[i][1:] == strings[j][:2] or strings[i][1:] == strings[j][1:]:
            count += 1

print(count)
