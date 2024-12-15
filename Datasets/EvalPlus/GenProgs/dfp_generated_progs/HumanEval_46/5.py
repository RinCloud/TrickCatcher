def fib4(n: int):
    prev_nums = [0, 0, 2, 0]
    if n <= 3:
        return prev_nums[n]
    for i in range(4, n+1):
        sum_nums = sum(prev_nums)
        prev_nums.pop(0)
        prev_nums.append(sum_nums)
    return prev_nums[-1]