#taking the inputs
N = int(input())
A = int(input())

#checking if it is possible to pay N yen using only 1-yen and 500-yen coins
if N % 500 <= A:
    print("Yes")
else:
    print("No")