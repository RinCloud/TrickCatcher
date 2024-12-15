a, b = map(int, input().split())

str1 = str(a) * b
str2 = str(b) * a

if str1 < str2:
    print(str1)
else:
    print(str2)