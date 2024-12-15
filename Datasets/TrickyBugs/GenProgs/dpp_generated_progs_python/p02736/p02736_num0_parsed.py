# CODE:

N = int(input())
a = list(map(int, input()))

x = a.copy()
for i in range(2,N+1):
    x_new = []
    for j in range(1,N+2-i):
        x_new.append(abs(x[j-1] - x[j]))
    x = x_new.copy()

print(x[0])