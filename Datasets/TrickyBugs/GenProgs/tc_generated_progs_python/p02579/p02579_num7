from collections import deque

def solve(H: int, W: int, ch: int, cw: int, dh: int, dw: int, s: list[str]) -> int:
    vi=[ [-1 for _ in range(W)] for _ in range(H)]#visit
    st=deque()
    st2=deque()
    st.append([ch-1,cw-1])
    vi[ch-1][cw-1]=1
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
                return c
            for m in d:
                x=w1+m[1]
                y=h1+m[0]
                if 0<=y<H and 0<=x<W:
                    if s[y][x]=="." and vi[y][x]==-1:
                        st.append([y,x])
                    elif s[y][x]=="#":s2=1
                    vi[y][x]=1
            if s2==1: st2.append([h1,w1])

        while st2:
            h1,w1=st2.popleft()
            for m in d2:
                x=w1+m[1]
                y=h1+m[0]
                if 0<=y<H and 0<=x<W and vi[y][x]==-1 and s[y][x]==".":
                    vi[y][x]=1
                    st.append([y,x])
        c+=1

    return -1

def main():
    h, w = map(int, input().split())
    ch, cw = map(int, input().split())
    dh, dw = map(int, input().split())
    s=[input() for _ in range(h)]

    print(solve(h, w, ch, cw, dh, dw, s))


if __name__ == '__main__':
    main()