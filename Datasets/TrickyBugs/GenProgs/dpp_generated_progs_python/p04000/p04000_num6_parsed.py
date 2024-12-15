H, W, N = map(int, input().split())
cnt = [0] * 10

for i in range(N):
    a, b = map(int, input().split())
    cnt[0] += (a >= 2 and a <= H - 1 and b >= 2 and b <= W - 1)
    cnt[1] += (a >= 1 and a <= H - 2 and b >= 2 and b <= W - 1)
    cnt[2] += (a >= 2 and a <= H - 1 and b >= 1 and b <= W - 2)
    cnt[3] += (a >= 1 and a <= H - 2 and b >= 1 and b <= W - 2)
    cnt[4] += (a >= 3 and a <= H and b >= 3 and b <= W)
    cnt[5] += (a >= 1 and a <= H - 2 and b >= 3 and b <= W)
    cnt[6] += (a >= 3 and a <= H and b >= 1 and b <= W - 2)
    cnt[7] += (a >= 3 and a <= H and b >= 2 and b <= W - 1)
    cnt[8] += (a >= 2 and a <= H - 1 and b >= 3 and b <= W)
    cnt[9] += (a >= 2 and a <= H - 1 and b >= 2 and b <= W - 1)

print('\n'.join(map(str, cnt)))