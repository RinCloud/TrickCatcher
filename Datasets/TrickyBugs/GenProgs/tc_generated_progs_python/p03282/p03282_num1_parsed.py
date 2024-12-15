s = list(map(int, input()))
k = int(input())

index = 0
while k > 0:
    if index == len(s):
        break
    if s[index] == 1:
        index += 1
        continue

    count = s[index]
    if k <= count:
        print(s[index])
        break
    else:
        k -= count
        index += 1

if k > 0:
    print(1)
