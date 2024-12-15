import string

if __name__ == '__main__':
    A = input()
    N = len(A)
    
    p = {}
    for x in string.ascii_lowercase:
        p[x] = N
        
    tb = [(0, 0, 0)] * (N+2)
    tb[N] = (1, 0, 0)
    tb[N+1] = (0, 0, 0)
    
    for i, x in reversed(list(enumerate(A))):
        p[x] = i
        tb[i] = min([(tb[p[c] + 1][0] + 1, c, p[c] + 1) for c in string.ascii_lowercase])
    
    i = 0
    ans = []
    while i < N:
        ans.append(tb[i][1])
        i = tb[i][2]
        
    print("".join(ans))