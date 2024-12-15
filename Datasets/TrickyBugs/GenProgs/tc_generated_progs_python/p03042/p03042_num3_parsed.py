def date_format(s):
    if (9 < s < 1300):
        # In YYMM format
        return 'YYMM'
    elif (0 < s % 100 < 13):
        # In MMYY format
        return 'MMYY'
    else:
        # Invalid
        return 'NA'

s = int(input())
print(date_format(s))