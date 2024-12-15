# SOLUTION:

N, M = map(int, input().split())
L = []
R = []
for _ in range(N):
    l, r = map(int, input().split())
    L.append(l)
    R.append(r)

left_max = max(L)
right_min = min(R)

if right_min < left_max:
    print(0)
else:
    print(right_min - left_max + 1)