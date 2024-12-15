n = int(input())
if n%10 == 0:
    print(10)
else:
    nums = list(map(int,[x for x in str(n)]))
    print(sum(nums))