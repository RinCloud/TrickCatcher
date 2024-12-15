N = int(input())

max_divisible = 1
max_divisible_cnt = 0

for i in range(1, N+1):
    cnt = 0
    num = i
    while num % 2 == 0:
        cnt += 1
        num /= 2
    
    if cnt > max_divisible_cnt:
        max_divisible = i
        max_divisible_cnt = cnt

print(max_divisible)