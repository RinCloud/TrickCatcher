N = int(input())

streak = 1
prev = N % 10
N //= 10

while N > 0:
    digit = N % 10
    if digit == prev:
        streak += 1
    else:
        streak = 1
    
    if streak >= 3:
        print("Yes")
        break
    
    prev = digit
    N //= 10
else:
    print("No")
