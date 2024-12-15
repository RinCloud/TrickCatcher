import sys

def solve(S, T):
    MIN = ord('a')
    MAX = ord('z') + 1
    S = list(S)
    T = list(T)
    N = len(S)
    M = len(T)
    res = [""] * N
    for i in range(N-M, -1, -1):
        match = True
        for j in range(M):
            if S[i+j] != "?" and S[i+j] != T[j]:
                match = False
                break
        if match:
            res[i:i+M] = T
            for i in range(N):
                if res[i] == "?":
                    res[i] = chr(MIN)
                elif res[i] == "":
                    res[i] = "a"
            return "".join(res)
    return "UNRESTORABLE"


S = input().strip()
T = input().strip()
print(solve(S, T))