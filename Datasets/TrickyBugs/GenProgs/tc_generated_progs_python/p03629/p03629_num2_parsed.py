import string

if __name__ == '__main__':
    A = input()

    p = {}
    for x in string.ascii_lowercase:
        p[x] = len(A)
    # print(p)
    '''
    tb
    1つ目：
    2つ目：アルファベット
    3つ目：
    '''
    tb = [(0, '', 0)] * (len(A) + 2)
    tb.append((1, '', 0))
    tb.append((0, '', 0))
    # print(tb)
    for i, x in reversed(list(enumerate(A))):
        p[x] = i
        tb[i] = min([(tb[p[c] + 1][0] + 1, c, p[c] + 1) for c in string.ascii_lowercase])
        # print(tb)
    i = 0
    ans = []
    while i < len(A):
        ans.append(tb[i][1])
        i = tb[i][2]

    print("".join(ans))
