def max_layers(n, d):
    unique_diameters = set(d)
    return len(unique_diameters)

n = int(input())
d = []
for _ in range(n):
    d.append(int(input()))

print(max_layers(n, d))