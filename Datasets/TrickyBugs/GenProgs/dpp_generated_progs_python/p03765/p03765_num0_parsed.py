S = input()
T = input()
q = int(input())

for _ in range(q):
    a, b, c, d = map(int, input().split())

    sub_s = S[a-1:b]
    sub_t = T[c-1:d]

    transformed_sub_s = sub_s.replace('A', 'BB').replace('B', 'AA')

    if transformed_sub_s == sub_t:
        print('YES')
    else:
        print('NO')