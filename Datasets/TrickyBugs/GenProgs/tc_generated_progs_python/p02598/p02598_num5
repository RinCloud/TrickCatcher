N, K = map(int, input().split())
A = list(map(int, input().split()))

def can_cut_pieces(k, m, A):
    count = 0
    for i in A:
        if i > m:
            count += i // m
            if i % m == 0:
                count -= 1
        if count > k:
            return False
    return True

l = 0
r = max(A)

while r-l > 1:
    m = (r+l) // 2
    if can_cut_pieces(K, m, A):
        r = m
    else:
        l = m

print(r)