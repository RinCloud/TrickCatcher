X = int(input())

i = 1
while True:
    if X <= i * (i + 1) / 2:
        print(i)
        break
    i += 1