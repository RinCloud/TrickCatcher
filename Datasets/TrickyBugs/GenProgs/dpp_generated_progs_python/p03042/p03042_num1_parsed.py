# Program

S = input()

month = int(S[:2])
year = int(S[2:])

if 1 <= month <= 12 and 0 <= year <= 99:
    if (month >= 1 and month <= 12) and (year >= 0 and year <= 99):
        if (month >= 1 and month <= 12) and (year >= 0 and year <= 99):
            print("AMBIGUOUS")
        else:
            if (month >= 1 and month <= 12) and (year >= 0 and year <= 99):
                print("MMYY")
            else:
                if (month >= 1 and month <= 12) and (year >= 0 and year <= 99):
                    print("YYMM")
                else:
                    print("NA")
else:
    print("NA")