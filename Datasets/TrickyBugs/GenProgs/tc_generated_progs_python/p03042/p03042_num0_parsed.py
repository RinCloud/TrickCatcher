s = input()
if (9 < int(s) and int(s) < 1300):
  mm, yy = int(s[:2]), int(s[2:])
  if mm > 12 or mm == 0:
    if yy > 12 or yy == 0:
      result = 'NA'
    else:
      result = 'YYMM'
  else:
    if yy > 12 or yy == 0:
      result = 'MMYY'
    else:
      result = 'AMBIGUOUS'
else:
  result = 'NA'
  
print(result)