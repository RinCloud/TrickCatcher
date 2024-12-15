N, K = map(int, input().split())
A = list(map(int, input().split()))

A.sort(reverse=True)

l = 0
r = A[0]

while r-l > 1:
    m = (r+l) // 2
    count = 0
    for i in A:
        if i > m:
            count += (i // m) - 1
    if count > K:
        l = m
    else:
        r = m

print((r+l) // 2)
