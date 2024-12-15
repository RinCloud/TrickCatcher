import heapq

X, Y, Z, K = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
C = list(map(int, input().split()))

AB = [a + b for a in A for b in B]
AB.sort(reverse=True)

ABC = [ab + c for ab in AB[:K] for c in C]
ABC.sort(reverse=True)

for abc in ABC[:K]:
    print(abc)