X,Y,Z=map(int,input().split())
print((X-2*Z)//(Y+Z)+((X-2*Z)%(Y+Z))//Y)