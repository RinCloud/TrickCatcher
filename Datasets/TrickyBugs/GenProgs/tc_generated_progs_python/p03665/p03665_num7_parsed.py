n, p = map(int, input().split())
A = list(map(int, input().split()))
A_mod = [a%2 for a in A]  # Fixed variable name from A to A_mod
if sum(A_mod) == 0:  # Fixed variable name from A to A_mod
    print(pow(2, n) if p==0 else 0)
elif n>=2:
    print(pow(2, n-1))  # Fixed the formula for calculating the result
else:
    print(1 if A_mod[0]==p else 0)  # Fixed variable name from A to A_mod