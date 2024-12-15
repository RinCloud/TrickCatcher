def solve(N, nums):
    # Count the number of even and odd integers
    even_count = 0
    odd_count = 0
    for i in range(N):
        if nums[i] % 2 == 0:
            even_count += 1
        else:
            odd_count += 1
    
    # If either even_count or odd_count is odd, it is possible to have only one integer on the blackboard
    if even_count % 2 == 1 or odd_count % 2 == 1:
        print("YES")
    else:
        print("NO")


# Read input values
N = int(input())
nums = list(map(int, input().split()))

# Solve the problem
solve(N, nums)