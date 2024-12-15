def good_string(N, P):
    S = ['0'] * N
    
    for i in range(N):
        for j in range(i):
            if P[i] < P[j]:
                S[i] = '1'
    
    X = []
    Y = []
    
    for i in range(N):
        if S[i] == '0':
            X.append(P[i])
        else:
            Y.append(P[i])
    
    for i in range(1, N):
        if len(X) == len(Y):
            break
        
        if P[i] < P[i-1]:
            if P[i] in Y:
                Y.remove(P[i])
                X.append(P[i])
            else:
                X.remove(P[i])
                Y.append(P[i])
    
    if len(X) != len(Y):
        return -1
    
    return ''.join(S)