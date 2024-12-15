n = int(input())
sides = list(map(int, input().split()))

max_side = max(sides)
sum_other_sides = sum(sides) - max_side

if max_side < sum_other_sides:
    print("Yes")
else:
    print("No")