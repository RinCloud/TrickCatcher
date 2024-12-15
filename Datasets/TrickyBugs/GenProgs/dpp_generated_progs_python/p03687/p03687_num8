s = input()

def min_operations(s):
    n = len(s)
    ans = float('inf')
    for i in range(n):
        cnt = 0
        t = list(s)
        while len(set(t)) > 1:
            nt = []
            for j in range(len(t) - 1):
                if t[j] == s[i] or t[j+1] == s[i]:
                    nt.append(s[i])
                else:
                    nt.append(t[j])
            t = nt
            cnt += 1
        ans = min(ans, cnt)
    return ans

print(min_operations(s))