N = input()

digit_sum = sum([int(digit) for digit in str(N)])

if digit_sum % 9 == 0:
    print('Yes')
else:
    print('No')