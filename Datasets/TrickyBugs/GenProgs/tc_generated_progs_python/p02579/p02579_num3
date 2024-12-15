from collections import deque

def solve():
    h,w=map(int,input().split())
    ch,cw=map(int,input().split())
    dh,dw=map(int,input().split())
    s=[input() for _ in range(h)] #マップ
    vi=[ [-1 for _ in range(w)] for _ in range(h)]#visit
    st=deque()
    st2=deque()
    st.append([ch-1,cw-1])
    vi[ch-1][cw-1]=0
    c=0

    d=[[0,1],[-1,0],[1,0],[0,-1]]
    d2=[[-2,-2],[-2,-1],[-2,0],[-2,1],[-2,2],
        [-1,-2],[-1,-1],[-1,1],[1,2],[0,-2],[0,2],
        [1,-2],[1,-1],[1,1],[1,2],
        [2,-2],[2,-1],[2,0],[2,1],[2,2]]

    while st or st2:
        while st:
            s2=0
            h1,w1=st.popleft()
            if dh-1==h1 and dw-1 ==w1:
                print(c)
                return
            for m in d:
                x=w1+m[1]
                y=h1+m[0]
                if 0<=y<h and 0<=x<w:
                    if s[y][x]=="." and vi[y][x]==-1:
                        st.append([y,x])
                        vi[y][x]=0
                    elif s[y][x]=="#":s2=1
                    vi[y][x]=1
            if s2==1: st2.append([h1,w1])

        while st2:
            h1,w1=st2.popleft()
            for m in d2:
                x=w1+m[1]
                y=h1+m[0]
                if 0<=y<h and 0<=x<w and vi[y][x]==-1 and s[y][x]==".":
                    vi[y][x]=1
                    st.append([y,x])
        c+=1
    print(-1)
solve()