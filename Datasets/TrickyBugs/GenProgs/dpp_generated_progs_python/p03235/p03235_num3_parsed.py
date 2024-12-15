from queue import Queue

def good_string(N, P):
    S = ["0"] * N
    X = []
    Y = []
    cnt = 0
    for i in range(N):
        p = P[i]
        if p > cnt:
            cnt = p
            S[i] = "1"
        if p == cnt:
            if len(X) == 0:
                S[i] = "1"
            else:
                S[i] = "0"
        if S[i] == "0":
            X.append(p)
        else:
            Y.append(p)
    
    if len(X) != len(Y):
        return -1
    else:
        return "".join(S)
    
N = int(input())
P = list(map(int, input().split()))

ans = good_string(N, P)
print(ans)