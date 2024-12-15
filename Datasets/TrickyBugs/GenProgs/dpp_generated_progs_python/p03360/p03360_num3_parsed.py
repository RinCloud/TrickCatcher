A, B, C = map(int, input().split())
K = int(input())

nums = [A, B, C]
max_num = max(nums)

for i in range(K):
    nums[nums.index(max_num)] *= 2
    max_num = max(nums)

print(sum(nums))