a, b, c = map(int, input().split())

count = 0
while a % 2 == 0 and b % 2 == 0 and c % 2 == 0:
    half_a = a // 2
    half_b = b // 2
    half_c = c // 2
    a = half_b + half_c
    b = half_a + half_c
    c = half_a + half_b
    count += 1

if a % 2 == 0 or b % 2 == 0 or c % 2 == 0:
    print(-1)
else:
    print(count)