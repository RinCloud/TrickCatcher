from collections import Counter

n = int(input())
a = list(map(int, input().split()))
a.sort()
I, A = min(a), max(a)
c = Counter(a)
p = print
e = exit

if c[A] == 1 or c[I] > A % 2 + 1 or I * 2 < A:
    p("Impossible")
    e()

for i in range(I + 1, A + 1):
    if not (i in c and c[i] >= 2):
        p("Impossible")
        e()

p("Possible")