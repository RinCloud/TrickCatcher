x = int(input())
li = []
for i in range(2, int(x ** 0.5) + 1):
    for j in range(2, int(x ** 0.5) + 1):
        num = i ** j
        if num <= x:
            li.append(num)
print(max(li))