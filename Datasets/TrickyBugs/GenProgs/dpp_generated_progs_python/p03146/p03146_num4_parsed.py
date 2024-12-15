s = int(input())

def sequence(s):
    a = [s]
    while True:
        if a[-1] % 2 == 0:
            next_term = a[-1] // 2
        else:
            next_term = 3 * a[-1] + 1
        
        if next_term in a:
            return len(a)
        else:
            a.append(next_term)

m = sequence(s)
print(m)