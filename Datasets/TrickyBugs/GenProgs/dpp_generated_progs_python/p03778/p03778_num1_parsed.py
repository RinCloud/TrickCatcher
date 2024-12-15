W, a, b = map(int, input().split())
 
if a + W <= b or b + W <= a:
    distance = min(abs(b - (a + W)), abs(a - (b + W)))
else:
    distance = 0
 
print(distance)