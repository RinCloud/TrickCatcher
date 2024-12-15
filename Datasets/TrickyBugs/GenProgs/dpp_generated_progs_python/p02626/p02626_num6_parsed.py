N = int(input())
A = list(map(int, input().split()))

# Calculate the total sum of stones
total_sum = sum(A)

# Check if Takahashi can guarantee his win
if total_sum % 2 == 0:
    min_stones = min(A) // 2
    if min_stones * 2 <= total_sum - min_stones:
        print(min_stones)
    else:
        print(-1)
else:
    print(-1)