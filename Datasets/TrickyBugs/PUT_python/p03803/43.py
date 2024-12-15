A,B=map(int,input().split())
if A==B: print('Draw')
else: print('Alice' if ((B!=1 and A > B) or (A==1 and B==13)) else 'Bob')