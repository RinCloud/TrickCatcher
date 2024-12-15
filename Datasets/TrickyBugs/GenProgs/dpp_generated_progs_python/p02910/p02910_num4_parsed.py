# Program

s = input()

odd_positions = s[0::2]
even_positions = s[1::2]

if all(x in "RUD" for x in odd_positions) and all(x in "LUD" for x in even_positions):
    print("Yes")
else:
    print("No")