D, G = map(int, input().split())
PC = [0] + [list(map(int, input().split())) for i in range(D)]


def f(p, c):
    if p == 0:
        return 10 ** 9
    m = min(c // (p * 100), PC[p][0])
    s = 100 * p * m
    if m == PC[p][0]:
        s += PC[p][1]
    if s < c:
        m += f(p - 1, c - s)
    return min(m, f(p - 1, c))


print(f(D, G))