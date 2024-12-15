s = int(input())

def f(n):
    if n % 2 == 0:
        return n // 2
    else:
        return 3 * n + 1

a = [s]
while True:
    next_num = f(a[-1])
    if next_num in a:
        print(len(a))
        break
    else:
        a.append(next_num)