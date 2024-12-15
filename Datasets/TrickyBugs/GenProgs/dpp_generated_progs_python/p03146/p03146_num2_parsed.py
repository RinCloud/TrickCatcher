# Program

s = int(input())

a = [s]
while True:
    if a[-1] % 2 == 0:
        next_val = a[-1] // 2
    else:
        next_val = 3 * a[-1] + 1
        
    if next_val in a:
        m = len(a)
        break
    
    a.append(next_val)

print(m)