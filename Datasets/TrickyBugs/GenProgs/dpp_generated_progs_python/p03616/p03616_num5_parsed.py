X = int(input())
K = int(input())
r = list(map(int, input().split()))
Q = int(input())

a = [0] * (K+1)
for i in range(K):
    a[i+1] = a[i] + r[i]

for _ in range(Q):
    t, a_ = map(int, input().split())
    idx = bisect_right(a, t) - 1
    if idx == K:
        print(X - a_)
    else:
        if (a[idx] - t) % 2 == 0:
            print(a_ + (X - r[idx] + 1) // 2)
        else:
            print(a_ // 2)