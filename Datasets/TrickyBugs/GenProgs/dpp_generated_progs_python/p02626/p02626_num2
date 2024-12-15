# Program

n = int(input())
a = list(map(int, input().split()))

total_stones = sum(a)

# If only 1 pile or sum of stones is odd, Takahashi can't guarantee his win
if n == 1 or total_stones % 2 == 1:
    print(-1)
else:
    # We need to check if Takahashi can guarantee his win by moving 0 to a[1]-1 stones to the second pile
    # If Takahashi moves x stones to the second pile, then the sum of stones in the first pile will be total_stones - x
    x = (total_stones - min(a)) // 2

    # Check if the sum of stones in the first pile is greater than or equal to x and less than or equal to a[1]-1
    if min(a) <= x <= a[0] - 1:
        print(x)
    else:
        print(-1)