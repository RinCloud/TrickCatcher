def find_semi_common_multiples(N, M, A):
    count = 0
    for x in range(1, M+1):
        flag = True
        for k in range(N):
            p = (x / A[k]) - 0.5
            if p < 0 or p % 1 != 0:
                flag = False
                break
        if flag:
            count += 1
    return count

N, M = map(int, input().split())
A = list(map(int, input().split()))

result = find_semi_common_multiples(N, M, A)
print(result)