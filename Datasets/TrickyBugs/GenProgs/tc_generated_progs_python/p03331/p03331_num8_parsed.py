Repaired Code:

n = int(input())
if n%10 == 0:
    print(1)
else:
    nums = [1] + [0] * (n//10)
    print(sum(nums))