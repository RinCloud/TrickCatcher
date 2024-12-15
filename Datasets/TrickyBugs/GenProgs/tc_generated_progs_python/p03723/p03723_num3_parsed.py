a, b, c = map(int, input().split())

count = 0

while a % 2 == 0 and b % 2 == 0 and c % 2 == 0:
    temp_a = a
    temp_b = b
    temp_c = c

    a = (temp_b + temp_c) // 2
    b = (temp_a + temp_c) // 2
    c = (temp_a + temp_b) // 2

    count += 1

if a % 2 == 1 or b % 2 == 1 or c % 2 == 1:
    print(count)
else:
    print(-1)
