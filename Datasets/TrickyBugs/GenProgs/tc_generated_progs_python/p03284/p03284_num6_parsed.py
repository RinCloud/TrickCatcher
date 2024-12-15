n, k = map(int, input().split())

# if k divides n, then the minimum difference is 0
if n % k == 0:
    print(0)
else:
    # if k does not divide n, then add 1 to the minimum difference
    print(1)
