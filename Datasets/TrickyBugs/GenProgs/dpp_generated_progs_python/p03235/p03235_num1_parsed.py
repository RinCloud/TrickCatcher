def good_string(N, P):
    X = []
    Y = []
    S = ['0'] * N
    for i in range(N):
        if S[i] == '0':
            X.append(P[i])
        else:
            Y.append(P[i])
        if len(X) == len(Y):
            S[i] = '1'
        elif len(X) < len(Y):
            S[i] = '0'
    if len(X) != len(Y):
        return -1
    return ''.join(S)

N = int(input())
P = list(map(int, input().split()))
print(good_string(N, P))