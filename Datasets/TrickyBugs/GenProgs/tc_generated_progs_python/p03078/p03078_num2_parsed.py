import sys
input = sys.stdin.readline

x, y, z, k = map(int, input().split())
a = sorted(list(map(int, input().split())), reverse=True)
b = sorted(list(map(int, input().split())), reverse=True)
c = sorted(list(map(int, input().split())), reverse=True)

abc = []
for ai in a:
    for bi in b:
        for ci in c:
            if len(abc) < k:
                abc.append(ai + bi + ci)
            else:
                break

abc.sort(reverse=True)
for i in range(k):
    print(abc[i])
