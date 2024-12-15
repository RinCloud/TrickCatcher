n, m, k = map(int, input().split())
s = input()
t = input()

x = int(s, 2)
y = int(t, 2)
for _ in range(k):
    z = x & y
    x += z
    y += z

print(bin(x)[2:].zfill(n))
print(bin(y)[2:].zfill(m))