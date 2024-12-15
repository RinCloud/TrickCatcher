def dfs(u,p,t,cycle):
    if t[u]: return
    t[u]=1
    for v in a_connects[u]:
        if v==p: continue
        if t[v]==1:
            cycle[0]=1
            continue
        dfs(v,u,t,cycle)

n, m = map(int, input().split(" "))
a = [list(map(int, input().split(" "))) for i in range(m)]

a_connects = [[] for i in range(n)]
for x, y in a:
    a_connects[x-1].append(y-1)
    a_connects[y-1].append(x-1)

bridge_count = 0
for i, adjs in enumerate(a_connects):
    for j in adjs:
        t=[0]*n
        cycle=[0]
        a_connects[i].remove(j)
        a_connects[j].remove(i)
        if i>j: x,y=j,i
        else: x,y=i,j
        dfs(x,-1,t,cycle)
        if cycle[0]==0:
            bridge_count+=1
        a_connects[i].append(j)
        a_connects[j].append(i)

print(bridge_count)