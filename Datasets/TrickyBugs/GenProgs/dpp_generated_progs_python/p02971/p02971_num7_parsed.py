n = int(input())
a = []
for i in range(n):
    a.append(int(input()))

for i in range(n):
    max_value = max(a[:i] + a[i+1:])
    print(max_value)