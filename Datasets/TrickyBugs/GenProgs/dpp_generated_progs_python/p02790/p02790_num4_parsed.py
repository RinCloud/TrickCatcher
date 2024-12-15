a, b = map(int, input().split())

string1 = str(a) * b
string2 = str(b) * a

if string1 <= string2:
    print(string1)
else:
    print(string2)