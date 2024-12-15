n = int(input())
if n % 10 == 0:
    print(1)
else:
    nums = [int(x) for x in str(n)]
    print(sum(nums))
