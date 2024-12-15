D, G = map(int, input().split())
PC = [0] + [list(map(int, input().split())) for i in range(D)]

def f(p, c, ans):
    if p == 0:
        return ans
    m = min(c // (p * 100), PC[p][0])
    s = 100 * p * m
    if m == PC[p][0]:
        s += PC[p][1]
    if s < c:
        ans += m
    return f(p - 1, c - s, ans)

print(f(D, G, 0))