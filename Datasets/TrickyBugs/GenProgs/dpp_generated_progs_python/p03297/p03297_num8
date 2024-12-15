T = int(input())

for _ in range(T):
    A, B, C, D = map(int, input().split())

    # Check if Snuke can buy juice indefinitely
    if A < B or D < B:
        print("No")
    elif B <= C:
        print("Yes")
    elif (A - B) % (B - C) == 0:
        print("Yes")
    elif (A - B) % (B - C) <= D:
        print("Yes")
    else:
        print("No")