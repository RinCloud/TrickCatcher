T = int(input())

for _ in range(T):
    A, B, C, D = map(int, input().split())
    
    if (A - 1) // B * (B + D) + B >= A + C:
        print("Yes")
    else:
        print("No")