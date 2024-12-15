s = input()
n = len(s)
if s != s[::-1]:
    print('No')
else:
    if s[:n//2] != s[:n//2][::-1]:
        print('No')
    elif s[(n+3)//2-1:] != s[(n+3)//2-1:][::-1]:
        print('No')
    else:
        print('Yes')
