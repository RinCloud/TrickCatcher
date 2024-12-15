S = input()

# Check for YYMM format
if int(S[:2]) >= 1 and int(S[:2]) <= 12:
    if int(S[2:]) >= 1 and int(S[2:]) <= 12:
        print('AMBIGUOUS')
    else:
        print('MMYY')
# Check for MMYY format
elif int(S[2:]) >= 1 and int(S[2:]) <= 12:
    print('YYMM')
else:
    print('NA')