K = int(input())

multiple = 7
position = 1

while True:
    if multiple % K == 0:
        print(position)
        break
    elif multiple > 10**18:
        print(-1)
        break
    else:
        multiple = multiple * 10 + 7
        position += 1