N = int(input())
S = input()

count = 0
for i in range(N):
    for j in range(i, N):
        A = [0] * (2 * 10**9 + 1)
        P = 0
        for k in range(i, j+1):
            if S[k] == '+':
                A[P] += 1
            elif S[k] == '-':
                A[P] -= 1
            elif S[k] == '>':
                P += 1
            elif S[k] == '<':
                P -= 1
        
        if A == [0] * (2 * 10**9 + 1) and P == 0:
            count += 1

print(count)