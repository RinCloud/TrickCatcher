s = input()
q = int(input())

for _ in range(q):
    query = input().split()

    if query[0] == '1':
        s = s[::-1]
    else:
        f = int(query[1])
        c = query[2]

        if f == 1:
            s = c + s
        else:
            s = s + c

print(s)