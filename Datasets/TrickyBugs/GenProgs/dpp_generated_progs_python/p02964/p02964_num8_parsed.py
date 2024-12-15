N, K = map(int, input().split())
A = list(map(int, input().split()))

s = []
for ai in A:
    if ai in s:
        while s[-1] == ai:
            s.pop()
    else:
        s.append(ai)

print(' '.join(map(str, s)))