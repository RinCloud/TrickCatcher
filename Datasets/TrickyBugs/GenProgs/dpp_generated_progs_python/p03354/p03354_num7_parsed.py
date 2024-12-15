N, M = read integers from input
p = read list of integers from input

count = 0
for i in range(N):
    if p[i] == i+1:
        count += 1

max_count = count
for _ in range(M):
    x, y = read integers from input
    if p[x-1] != x and p[y-1] != y:
        if p[x-1] == y and p[y-1] == x:
            count += 2
        else:
            count += 1
        max_count = max(max_count, count)

print(max_count)
