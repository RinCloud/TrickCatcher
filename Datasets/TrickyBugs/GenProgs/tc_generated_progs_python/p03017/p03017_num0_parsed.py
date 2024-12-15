n, a, b, c, d = map(int, input().split())
s = input()

if c < d:
    if '#' in s[a-1:c] or '#' in s[b-1:d]:
        print('No')
    else:
        print('Yes')
else:
    if '#' in s[a-1:c] or '#' in s[b-1:d]:
        print('No')
    else:
        print('Yes')
