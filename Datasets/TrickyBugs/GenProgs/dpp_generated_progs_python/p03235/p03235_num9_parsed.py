from heapq import heapify, heappop

def good_string(n, p):
    s = [0] * n
    for i, j in enumerate(p):
        s[j-1] = i
    b = bit([1] * n)
    q1 = []
    q2 = []
    b.ins(-s[0])
    for i in range(1, n):
        if s[i-1] > s[i]:
            q1.append(i)
        else:
            q2.append(q1[-1])
            q1[-1] = i
    b.ins(-s[q1[-1]])
    q2.append(q1.pop())
    while len(q1) > 0:
        x = q1.pop()
        while len(q2) > 0 and s[x] > s[q2[-1]]:
            b.del_(-s[q2.pop()])
        b.ins(-s[x])
    x = ['1'] * n
    b = bit(b.tree)
    for i in reversed(range(n)):
        if x[p[i]-1] == '1':
            if b.min_() >= -i:
                x[p[i]-1] = '0'
            b.del_(-i)
        else:
            b.ins(-i)
    return ''.join(x) if len(b.tree) == 0 else -1

class bit:
    def __init__(self, a):
        a = [-1] + a
        self.tree = [0] * (len(a) + 10)
        for i in range(1, len(a)):
            self.tree[i] = a[i]
            j = i + (i & -i)
            if j < len(a):
                self.tree[j] += self.tree[i]
        self.n = len(a)

    def ins(self, i, x=1):
        i += 1
        while i < self.n:
            self.tree[i] += x
            i += i & -i

    def su(self, i):
        i += 1
        res = 0
        while i > 0:
            res += self.tree[i]
            i -= i & -i
        return res

    def find_kth(self, k):
        k -= 1
        l = self.n
        res = 0
        while l > 0:
            l //= 2
            if k >= self.tree[l]:
                k -= self.tree[l]
                res += l
        return res

    def del_(self, i, x=1):
        self.ins(i, -x)

    def min_(self, i=0):
        l = self.n
        res = 0
        while l > 0:
            l //= 2
            if res + l < self.n and i >= self.tree[res + l]:
                res += l
                i -= self.tree[res]
        return res

# Reading input
n = int(input().strip())
p = list(map(int, input().strip().split()))

# Printing output
print(good_string(n, p))
