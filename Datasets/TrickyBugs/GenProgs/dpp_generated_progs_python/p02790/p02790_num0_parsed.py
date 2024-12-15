a, b = input().split()
a = int(a)
b = int(b)

string_1 = str(a) * b
string_2 = str(b) * a

if string_1 < string_2:
    print(string_1)
else:
    print(string_2)