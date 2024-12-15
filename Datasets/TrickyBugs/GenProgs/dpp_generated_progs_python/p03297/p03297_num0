T = int(input())

for _ in range(T):
    A, B, C, D = map(int, input().split())
    
    if B >= A:
        print("Yes")
    elif D < B:
        print("No")
    elif (B-A) % (C*D-B) == 0:
        print("Yes")
    elif (B-A) % (C*D-B) <= B % (C*D-B):
        print("Yes")
    else:
        print("No")