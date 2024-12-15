T = int(input())

for _ in range(T):
    A, B, C, D = map(int, input().split())
    
    if A < B or D < B:
        print("No")
    elif C >= B:
        print("Yes")
    elif C < B:
        if (A - B) % (B - C) == 0 or (A - B) % (B - C) <= D:
            print("Yes")
        else:
            print("No")