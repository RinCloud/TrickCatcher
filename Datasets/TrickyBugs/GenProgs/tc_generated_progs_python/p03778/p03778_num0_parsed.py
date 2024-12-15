w,a,b=map(int,input().split())
x=0 if a<=b<=a+w else min(abs(b-a-w),abs(a-b-w))
print(x)