N, M = map(int, input().split())
conditions = [list(map(int, input().split())) for _ in range(M)]

answer = -1
for num in range(10 ** (N-1), 10 ** N):
    digits = list(map(int, str(num)))
    
    flag = True
    for condition in conditions:
        s, c = condition
        if len(digits) < s or digits[s-1] != c:
            flag = False
            break
    
    if flag:
        answer = num
        break

print(answer)