# Introduction
# We have given integer N.
# N must be represented by 1-9 dijit, we have to form N by product of 2 numbers between 1 and 9 (inclusive). If it can, print Yes; if it cannot, print No.

# Approach
# Multiply each number from 1 to 9 from itself, and check whether it is equal to N or not.
# If it is equal to N, print Yes and return 0.
# else print No


N=int(input())
for i in range(1,10):
    if N%i==0 and N//i<=9:
        print("Yes")
        break
else:
    print("No")