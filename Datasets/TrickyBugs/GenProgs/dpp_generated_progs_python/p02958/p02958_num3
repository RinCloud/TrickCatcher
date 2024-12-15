N = int(input())
p = list(map(int, input().split()))

def check_sort(p):
    sorted_p = sorted(p)
    if p == sorted_p:
        return "YES"
    for i in range(N-1):
        for j in range(i+1, N):
            p[i], p[j] = p[j], p[i]
            if p == sorted_p:
                return "YES"
            p[i], p[j] = p[j], p[i]
    return "NO"

print(check_sort(p))