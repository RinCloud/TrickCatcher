n, p = map(int, input().split())
A = list(map(int, input().split()))
A = [a%2 for a in A]
if sum(A) == 0:
    print(pow(2, n) if p==0 else 0)
elif n>=2:
    print(pow(2, n)//2)
else:
    print(1 if A[0]==p else 0)