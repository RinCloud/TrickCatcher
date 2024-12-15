S = input()

first_part = int(S[:2])
second_part = int(S[2:])

if 1 <= first_part <= 12 and 1 <= second_part <= 12:
    print("AMBIGUOUS")
elif 1 <= first_part <= 12:
    print("MMYY")
elif 1 <= second_part <= 12:
    print("YYMM")
else:
    print("NA")
