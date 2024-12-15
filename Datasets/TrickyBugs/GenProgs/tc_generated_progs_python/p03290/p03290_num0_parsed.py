D, G = map(int, input().split())
PC = [0] + [list(map(int, input().split())) for i in range(D)]

def f(p, c, solved):
    if p == 0:
        return 10**9
    m = min(c // (p * 100), PC[p][0])
    s = 100 * p * m
    if m == PC[p][0]:
        s += PC[p][1]
    if s < c:
        return min(m + f(p - 1, c - s, solved + m), f(p - 1, c, solved))
    return m

print(f(D, G, 0))