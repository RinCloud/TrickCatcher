w,a,b=map(int,input().split())
x=0 if abs(a-b)<=w else abs(a-b)-w
print(x)