import sys
input = sys.stdin.readline

x, y, z, k = map(int, input().split())
a = sorted(map(int, input().split()), reverse=True)
b = sorted(map(int, input().split()), reverse=True)
c = sorted(map(int, input().split()), reverse=True)

ab = sorted(i+j for i in a for j in b)[:-k-1:-1]
abc = sorted(i+j for i in ab for j in c)[:-k-1:-1]

print(*abc, sep="\n")
