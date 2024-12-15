x=int(input())
li=[]
for i in range(2, int(x**(1/2))+1):
    for j in range(2, int(x**(1/2))+1):
        if i**j <= x:
            li.append(i**j)
print(max(li))