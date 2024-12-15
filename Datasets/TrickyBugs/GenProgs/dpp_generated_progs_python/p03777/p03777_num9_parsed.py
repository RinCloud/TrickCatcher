# Program

a, b = input().split()

if a == "H" and b == "H":
    print("H")
elif a == "D" and b == "H":
    print("D")
elif a == "H" and b == "D":
    print("D")
else:
    print("H")