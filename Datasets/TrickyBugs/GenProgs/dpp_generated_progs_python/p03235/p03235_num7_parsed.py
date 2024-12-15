def good_string(N, P):
    P = [0] + P  # 1-indexed permutation
    ans = [0] * N
    cnt = 0  # count of high elements
    for i in range(1, N + 1):
        if P[i] > cnt + 1:
            return -1  # not possible to form good string
        if P[i] > cnt:
            ans[i - 1] = 1  # append to Y
        cnt = max(cnt, P[i])
    return ''.join(map(str, ans))