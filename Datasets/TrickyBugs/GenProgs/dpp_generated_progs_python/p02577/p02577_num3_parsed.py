N = input()
digits_sum = sum(int(i) for i in str(N))
if digits_sum % 9 == 0:
    print("Yes")
else:
    print("No")