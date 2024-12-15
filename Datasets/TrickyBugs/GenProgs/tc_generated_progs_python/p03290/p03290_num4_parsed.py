D,G = map(int,input().split())
PC = [0]+[list(map(int,input().split()))for i in range(D)]

def f(p,c):
    if p==0:
        return 10**9
    m=min(c//(p*100),PC[p][0])
    s=100*p*m
    if m==PC[p][0]:
        s+=PC[p][1]
    if s<c:
        m+=f(p-1,c-s)
    return min(m,f(p-1,c))

total_problems = 0
total_score = 0
for p in range(D,0,-1):
    n = f(p, G-total_score) // p
    total_problems += n
    total_score += 100 * p * n + n * PC[p][1]
    if total_score >= G:
        break

print(total_problems)