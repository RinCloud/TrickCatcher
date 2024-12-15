n, q = map(int, input().split())
s = input()

a = [0] * (n + 1)
for i in range(1, n):
    a[i] = a[i - 1] + (s[i - 1] == "A" and s[i] == "C")

for i in range(q):
    l, r = map(int, input().split())
    print(a[r - 1] - a[l - 1])