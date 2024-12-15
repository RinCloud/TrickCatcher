def is_multiple_of_9(N):
  sum_of_digits = sum(int(digit) for digit in str(N))
  return sum_of_digits % 9 == 0

N = int(input())
if is_multiple_of_9(N):
  print('Yes')
else:
  print('No')
