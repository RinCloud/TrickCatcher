def can_sort_sequence(n, p):
    for i in range(n-1):
        if p[i] > p[i+1]:
            for j in range(i+1, n):
                if p[j] == i+1:
                    p[i], p[j] = p[j], p[i]
                    break
            else:
                return "NO"
            break
    else:
        return "YES"

n = int(input())
p = list(map(int, input().split()))

print(can_sort_sequence(n, p))