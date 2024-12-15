a, b = input().split()
a = int(a)
b = int(b)

string1 = str(a) * b
string2 = str(b) * a

if string1 < string2:
    print(string1)
else:
    print(string2)