s = input()
t = input()

if len(t) > len(s):
    print(-1)
else:
    repeat = (10**100) // len(s) + 1
    ss = s * repeat
    index = 0
    for i in range(len(ss)):
        if ss[i] == t[index]:
            index += 1
            if index == len(t):
                print(i+1)
                break
    else:
        print(-1)