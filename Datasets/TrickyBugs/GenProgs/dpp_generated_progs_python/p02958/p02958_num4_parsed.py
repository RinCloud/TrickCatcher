
def can_sort_permutation(N, p):
    sorted_p = sorted(p)
    swaps = 0
    
    for i in range(N):
        if p[i] != sorted_p[i]:
            for j in range(i+1, N):
                if p[j] == sorted_p[i]:
                    p[i], p[j] = p[j], p[i]
                    swaps += 1
                    break
    
    if swaps <= 1:
        return "YES"
    else:
        return "NO"

N = int(input())
p = list(map(int, input().strip().split()))

print(can_sort_permutation(N, p))
