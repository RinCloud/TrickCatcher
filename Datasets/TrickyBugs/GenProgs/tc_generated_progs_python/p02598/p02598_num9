N, K = map(int, input().split())
A = list(map(int, input().split()))

l = 1
r = 10 ** 9 + 1

while r-l > 1:
    m = (r+l) // 2
    count = 0
    for i in A:
        count += (i + m - 1) // m - 1
    
    if count <= K:
        r = m
    else:
        l = m

print(r)