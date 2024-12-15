n = int(input())
d = []
for _ in range(n):
    d.append(int(input()))

unique_d = set(d)
layers = len(unique_d)
print(layers)