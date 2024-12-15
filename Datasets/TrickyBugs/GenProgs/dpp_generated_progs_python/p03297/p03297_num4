import math

T = int(input())

for _ in range(T):
    A, B, C, D = map(int, input().split())

    if B >= A:
        print("Yes")
    elif D < C:
        print("No")
    else:
        remaining = A - B
        cycles = math.ceil(remaining / (B * (D - C)))
        new_stock = cycles * (D - C)
        total_stock = A + new_stock

        if total_stock >= B:
            print("Yes")
        else:
            print("No")