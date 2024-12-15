s = int(input())

def f(n):
    if n % 2 == 0:
        return n // 2
    else:
        return 3*n + 1

a = [s]
while True:
    next_term = f(a[-1])
    if next_term in a:
        break
    a.append(next_term)

m = len(a)
n = a.index(next_term)
print(m + n)