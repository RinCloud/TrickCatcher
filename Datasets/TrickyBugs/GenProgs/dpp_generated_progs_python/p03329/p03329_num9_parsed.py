N = int(input())

count = [float('inf')] * (N+1)
count[0] = 0

for i in range(1, N+1):
    j = 1
    while (6**j) <= i:
        count[i] = min(count[i], count[i - 6**j] + 1)
        j += 1

    j = 1
    while (9**j) <= i:
        count[i] = min(count[i], count[i - 9**j] + 1)
        j += 1

print(count[N])