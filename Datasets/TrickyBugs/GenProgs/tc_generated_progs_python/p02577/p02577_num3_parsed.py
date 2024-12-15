num_str = input()
digit_sum = sum([int(x) for x in num_str])
ans = digit_sum % 9 == 0

if ans:
  print('Yes')
else:
  print('No')
