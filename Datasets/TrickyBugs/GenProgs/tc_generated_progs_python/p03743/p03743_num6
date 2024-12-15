"""
Fixed code:
"""

def solve(N,D,Q,P):
    Q = [(k-1,i) for i,k in enumerate(Q)]
    Q.sort()

    for i,d in zip(reversed(range(len(D))), reversed(D)):
        if Q[-1][0] == i:
            P[Q[-1][1]] = P[i] >= x
            Q.pop()
    return P

N,start = map(int,input().split())
D = list(map(int,input().split()))
input()
Q = list(map(int,input().split()))

D.insert(0,start)
P = [D[0]]
for d in D[1:]:
    a = P[-1]
    b = abs(a-d)
    P.append(min(a,b))

result = [None]*len(Q)

result = solve(N,D,Q,P)

for r in result:
    print('YES' if r else 'NO')