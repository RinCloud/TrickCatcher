s = int(input())
output = ['NA','MMYY','YYMM','AMBIGUOUS'][(9 < s < 1300) - (0 < s % 100 < 13) * 2]
print(output)