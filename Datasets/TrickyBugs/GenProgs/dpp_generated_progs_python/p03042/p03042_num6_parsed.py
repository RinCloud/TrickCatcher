S = input()

# Check if S is valid in YYMM format
if (1 <= int(S[:2]) <= 12) and (1 <= int(S[2:]) <= 99):
    yy_mm_valid = True
else:
    yy_mm_valid = False

# Check if S is valid in MMYY format
if (1 <= int(S[2:]) <= 12) and (1 <= int(S[:2]) <= 99):
    mm_yy_valid = True
else:
    mm_yy_valid = False

# Print the result based on the validity of S in different formats
if yy_mm_valid and mm_yy_valid:
    print("AMBIGUOUS")
elif yy_mm_valid:
    print("YYMM")
elif mm_yy_valid:
    print("MMYY")
else:
    print("NA")
