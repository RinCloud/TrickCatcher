# Program to find a good string

def good_string(N, P):
    S = ['0'] * N
    X = []
    Y = []
    
    for i in range(N):
        if not X or P[i] > X[-1]:
            X.append(P[i])
            S[i] = '0'
        else:
            Y.append(P[i])
            S[i] = '1'
    
    if len(X) != len(Y):
        return -1
    
    return ''.join(S)

# Getting input from user
N = int(input())
P = list(map(int, input().split()))

# Calling function to find good string
result = good_string(N, P)

# Printing the result
print(result)