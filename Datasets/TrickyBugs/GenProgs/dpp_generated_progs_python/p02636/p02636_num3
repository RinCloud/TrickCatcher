s = input()

cnt = [0] * 300
cnt_0 = [0] * 300
cnt_1 = [0] * 300

n = len(s)
mod = 998244353
cnt[0] = 1
cnt_0[0] = 1
cnt_1[0] = 1

for i in range(2, n + 1):
    for j in range(i - 2, -1, -1):
        if s[i - 1] == "0":
            cnt_0[i] = (cnt_0[i] + cnt_1[j]) % mod
        else:
            cnt_0[i] = (cnt_0[i] + cnt[j]) % mod

    for j in range(i - 1, -1, -1):
        if s[i - 1] == "1":
            cnt_1[i] = (cnt_1[i] + cnt_0[j]) % mod
        else:
            cnt_1[i] = (cnt_1[i] + cnt[j]) % mod

    cnt[i] = (cnt_0[i] + cnt_1[i]) % mod

print(cnt[n])