s = int(input())
a = [s]
while True:
    if a[-1] % 2 == 0:
        a.append(a[-1]//2)
    else:
        a.append(a[-1]*3 + 1)
    if a[-1] in a[:-1]:
        print(len(a))
        break