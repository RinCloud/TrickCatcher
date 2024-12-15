import math

A, B, C = map(int, input().split())

count = 0

while True:
    if A % 2 == 1 or B % 2 == 1 or C % 2 == 1:
        break
    else:
        half_A = A / 2
        half_B = B / 2
        half_C = C / 2
        A = half_B + half_C
        B = half_A + half_C
        C = half_A + half_B
        count += 1

if A % 2 == 1 or B % 2 == 1 or C % 2 == 1:
    print(count)
else:
    print(-1)