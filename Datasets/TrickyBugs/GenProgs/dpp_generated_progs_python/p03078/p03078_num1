X, Y, Z, K = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
C = list(map(int, input().split()))

cakes = []

for a in A:
    for b in B:
        for c in C:
            cakes.append(a + b + c)

cakes.sort(reverse=True)

for i in range(K):
    print(cakes[i])