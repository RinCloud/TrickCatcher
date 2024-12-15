S = input()

if 0 < int(S[0:2]) <= 12 and 0 < int(S[2:4]) <= 12:
    print("AMBIGUOUS")
elif 0 < int(S[0:2]) <= 12:
    print("MMYY")
elif 0 < int(S[2:4]) <= 12:
    print("YYMM")
else:
    print("NA")