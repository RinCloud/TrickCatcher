T = int(input())
for _ in range(T):
    A, B, C, D = map(int, input().split())
    if A < B:
        print("No")
    elif C >= B:
        print("Yes")
    else:
        remaining_days = (A - B) // (B - C)
        if (A - B) % (B - C) == 0:
            print("Yes")
        else:
            remaining_stock = (A - B) % (B - C)
            if remaining_stock <= D:
                print("Yes")
            elif B - remaining_stock <= D:
                print("Yes")
            elif remaining_days > 0 and (remaining_stock - D) % (B - C) + C <= D:
                print("Yes")
            else:
                print("No")