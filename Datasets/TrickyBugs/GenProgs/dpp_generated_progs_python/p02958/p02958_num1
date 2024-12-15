# Program

N = int(input())
p = list(map(int, input().split()))

is_sorted = sorted(p) == p

if is_sorted:
    print("YES")
else:
    for i in range(N - 1):
        for j in range(i + 1, N):
            p_copy = p.copy()
            p_copy[i], p_copy[j] = p_copy[j], p_copy[i]
            if sorted(p_copy) == p_copy:
                print("YES")
                exit()
    print("NO")