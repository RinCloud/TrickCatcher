a,b,c=map(int,input().split())
print((b==c)*a+(c==a)*b+(a==b)*c)