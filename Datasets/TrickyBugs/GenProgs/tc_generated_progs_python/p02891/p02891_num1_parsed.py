s = input()
k = int(input())
m = 0
j = 0
if len(set(list(s))) == 1:
    print((len(s) * k) // 2)
    exit()

if s[0] == s[-1]:
    count = 0
    same_char = ""
    for c in s:
        if c == s[0]:
            count += 1
        else:
            break
    same_char = s[0]*count
            
    if same_char == s:
        print(len(s)*k//2)
    else:
        print((len(s)*k)//2 + count//2 + ((len(s)*k)//(len(s)-count)*count)//2)
else:
    print(len(s)*k//2)
