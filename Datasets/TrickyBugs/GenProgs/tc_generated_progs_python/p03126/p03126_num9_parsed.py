n, m = map(int, input().split())    
s = set(range(1, m+1))

for _ in range(n):
    b = list(map(int, input().split()))
    k, b = b[0], set(b[1:])
    s &= b

print(len(s))