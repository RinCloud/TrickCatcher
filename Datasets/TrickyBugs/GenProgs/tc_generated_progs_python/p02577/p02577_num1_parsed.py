#REPAIRED CODE:

N = input()
sum_of_digits = sum([int(digit) for digit in N])
if sum_of_digits % 9 == 0:
    print('Yes')
else:
    print('No')
