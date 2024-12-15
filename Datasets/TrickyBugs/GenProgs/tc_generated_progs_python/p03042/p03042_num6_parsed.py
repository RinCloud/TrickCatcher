s = int(input())
if (9 < s < 1300):
    if (0 < s%100 < 13):
        print('AMBIGUOUS')
    else:
        print('YYMM')
else:
    if (0 < s%100 < 13):
        print('MMYY')
    else:
        print('NA')
