s = input()
k = int(input())
if len(set(list(s))) == 1:
    print((len(s) * k) // 2)
    exit()
else:
    c1 = 0
    c2 = 0
    i = 0
    while i < len(s)-1 and s[i] == s[i+1]:
        c1 += 1
        i += 1
    # next letter after c1 consecutive s[i] is s[i+1] now
    i += 1
    while i < len(s)-1 and s[i] == s[i+1]:
        c2 += 1
        i += 1
    # now number of total consecutive sequence is c1 + c2 + 1 ( c1 before i+1 & c2 after i+1)
    print(c1 + (c1 + c2) * (k - 1) + 1)