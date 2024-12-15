n = int(input())
a = list(map(int, input()))

x = a

for i in range(2, n+1):
    next_x = []
    for j in range(n+1-i):
        next_x.append(abs(x[j] - x[j+1]))
    x = next_x

print(x[0])