import sys
input = sys.stdin.readline

x, y, z, k = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = sorted(int(i) for i in input().split())

a.sort(reverse=True)
b.sort(reverse=True)

ab = sorted(i+j for i in a for j in b, reverse=True)  # Reverse the order while sorting ab
ab = ab[:k]  # Only need to select the top k elements from ab
abc = sorted(i+j for i in ab for j in c, reverse=True)[:k]  # Reverse the order while sorting abc

print(*abc, sep="\n")  # No need to slice abc again to only print k elements