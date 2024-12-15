import sys

def construct_sequence(N, A, B):
    if A + B - 1 > N or A * B < N:
        return -1
    ans = [0] * N
    for i in range(A):
        ans[i] = i + 1
    cur, cnt = 1, A
    for i in range(B):
        l = cnt
        cnt += min(N - A, B - i - 1)
        r = cnt
        for j in range(r - 1, l - 1, -1):
            ans[j] = cur
            cur += 1
    i = 0
    while i < N:
        if ans[i] == 0:
            l = i
            i += 1
            while i < N and ans[i] == 0:
                i += 1
            r = i
            for j in range(r - 1, l - 1, -1):
                ans[j] = cur
                cur += 1
        i += 1
    return ans

input_line = sys.stdin.readline().split()
N = int(input_line[0])
A = int(input_line[1])
B = int(input_line[2])
sequence = construct_sequence(N, A, B)
if sequence == -1:
    print(-1)
else:
    print(*sequence)