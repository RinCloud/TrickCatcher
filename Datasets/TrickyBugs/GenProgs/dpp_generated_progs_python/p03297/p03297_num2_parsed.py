t = int(input())

for _ in range(t):
    a, b, c, d = map(int, input().split())
    
    if a < b:
        print("No")
        continue
        
    if b > c:
        print("No")
        continue
        
    if d < b - c:
        print("No")
        continue
        
    m = (a - b) % (c + d)
    
    if m > b:
        print("No")
    else:
        print("Yes")