# Get the input digit sequence
S = input().strip()

# Check if S is valid in YYMM format
valid_yymm = False
if int(S[:2]) >= 1 and int(S[:2]) <= 12:
    valid_yymm = True

# Check if S is valid in MMYY format
valid_mmyy = False
if int(S[2:]) >= 1 and int(S[2:]) <= 12:
    valid_mmyy = True

# Print the result
if valid_yymm and valid_mmyy:
    print("AMBIGUOUS")
elif valid_yymm:
    print("YYMM")
elif valid_mmyy:
    print("MMYY")
else:
    print("NA")
