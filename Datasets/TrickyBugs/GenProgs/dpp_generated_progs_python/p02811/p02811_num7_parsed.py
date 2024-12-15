# get the values of K and X from the input
K, X = map(int, input().split())

# check if the sum of K 500-yen coins is greater than or equal to X
if K * 500 >= X:
    print("Yes")
else:
    print("No")