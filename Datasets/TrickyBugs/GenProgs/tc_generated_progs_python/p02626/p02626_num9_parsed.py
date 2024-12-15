import sys
from functools import lru_cache


def solve(n, aaa):
    if n == 2:
        h, m = divmod(sum(aaa), 2)
        if m == 1 or h > aaa[0]:
            return -1
        return aaa[0] - h

    x = 0
    for a in aaa[2:]:
        x ^= a
    a0, a1 = aaa[:2]
    s = a0 + a1

    if s % 2 != x % 2:
        return -1

    b = 1 << 40
    MASK = (b << 1) - 1

    @lru_cache(maxsize=None)
    def dfs(p, b):
        if b == 0:
            return p
        m = (MASK ^ (b - 1)) << 1
        q = p ^ x & m
        if x & b == 0:
            if s >= p + q + 2 * b:
                if p | b <= a0:
                    return dfs(p | b, b >> 1)
                else:
                    return -1
            return dfs(p, b >> 1)
        else:
            if s < p + q + b:
                return -1
            if p | b <= a0:
                ret = dfs(p | b, b >> 1)
                if ret != -1:
                    return ret
            return dfs(p, b >> 1)

    ret = dfs(0, b)

    if ret <= 0:
        return -1
    return a0 - ret


n, *aaa = map(int, sys.stdin.buffer.read().split())
print(solve(n, aaa))
