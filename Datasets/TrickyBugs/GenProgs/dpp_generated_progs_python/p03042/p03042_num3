# Program

S = input()

# Check if YYMM format is valid
if int(S[:2]) >= 1 and int(S[:2]) <= 12:
    if int(S[2:]) >= 1 and int(S[2:]) <= 12:
        print("AMBIGUOUS")
    else:
        print("YYMM")
# Check if MMYY format is valid
elif int(S[2:]) >= 1 and int(S[2:]) <= 12:
    print("MMYY")
else:
    print("NA")