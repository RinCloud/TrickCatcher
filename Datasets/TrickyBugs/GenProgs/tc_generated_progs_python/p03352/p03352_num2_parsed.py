x = int(input())
result = 1
for power in range(2, int(x**0.5)+1):
    base = 2
    while base**power <= x:
        result = base**power
        base += 1
print(result)
