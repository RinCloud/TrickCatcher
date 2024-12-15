n, p = map(int, input().split())
A = list(map(int, input().split()))
A_mod = [a%2 for a in A]
if sum(A_mod) == 0:
    print(pow(2, n) if p==0 else 0)
elif n>=2:
    print(pow(2, n-1))
else:
    print(1 if A_mod[0]==p else 0)