N = int(input())

answer = 1
max_divisible = 0

for i in range(2, N+1):
    divisible = 0
    num = i
    while num % 2 == 0:
        divisible += 1
        num = num // 2
    if divisible > max_divisible:
        max_divisible = divisible
        answer = i

print(answer)