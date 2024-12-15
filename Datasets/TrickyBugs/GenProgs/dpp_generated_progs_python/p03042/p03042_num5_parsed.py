S = input()

# Check if S is valid in YYMM format
if 1 <= int(S[:2]) <= 12 and 1 <= int(S[2:]) <= 99:
    yymm_valid = True
else:
    yymm_valid = False

# Check if S is valid in MMYY format
if 1 <= int(S[2:]) <= 12 and 1 <= int(S[:2]) <= 99:
    mmyy_valid = True
else:
    mmyy_valid = False

if yymm_valid and mmyy_valid:
    print("AMBIGUOUS")
elif yymm_valid:
    print("YYMM")
elif mmyy_valid:
    print("MMYY")
else:
    print("NA")