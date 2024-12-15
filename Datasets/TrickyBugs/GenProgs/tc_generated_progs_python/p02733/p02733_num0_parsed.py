H, W, K = map(int, input().split())
S = [[int(x) for x in list(str(input()))] for _ in range(H)]
T = [[0] * (W + 1) for x in range(H + 1)]


def main():
    for h in range(H):
        for w in range(W):
            T[h][w] = T[h][w - 1] + S[h][w]

    for h in range(1, H):
        for w in range(W):
            T[h][w] = T[h][w] + T[h - 1][w]

    m = (H - 1) * (W - 1)
    for p in range(2**(H - 1)):
        D = [x for x in range(H - 1) if p & (2**x) != 0] + [H - 1]
        c, b = 0, -1
        f = False
        for w in range(W):
            u = -1
            for d in D:
                if T[d][w] - T[u][w] - T[d][b] + T[u][b] > K:
                    if b == w - 1:
                        f = True
                    c, b = c + 1, w - 1
                    break
                    u = d
            if f == True:
                break
        else:
            m = min(m, c + len(D) - 1)
    print(m)
    
main()