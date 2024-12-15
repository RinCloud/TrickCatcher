H, W, K = map(int, input().split())
S = [[int(x) for x in list(input().strip())] for _ in range(H)]
T = [[0] * (W+1) for _ in range(H+1)]

def main():
    for h in range(H):
        for w in range(W):
            T[h][w] = T[h][w-1] + S[h][w]

    for h in range(1, H):
        for w in range(W):
            T[h][w] = T[h][w] + T[h-1][w]

    min_cuts = H - 1
    for p in range(2 ** (H - 1)):
        D = [x for x in range(H - 1) if p & (2 ** x) != 0] + [H - 1]
        c = 0
        u = D[0] + 1
        for w in range(W):
            for d in D:
                if T[d][w] - T[u][w] - T[d][w-1] + T[u][w-1] > K:
                    c += 1
                    u = d+1
            if c > min_cuts:
                break
        else:
            min_cuts = min(min_cuts, c)
    if K == 0:
        min_cuts = 0
    print(min_cuts)
main()
