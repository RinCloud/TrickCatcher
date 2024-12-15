N = int(input())
numbers = list(map(int, input().split()))

# Count the number of even and odd numbers
even_count = sum(1 for num in numbers if num % 2 == 0)
odd_count = N - even_count

# If the counts of even and odd numbers are both even or both odd,
# it is possible to have only one integer on the blackboard
if (even_count % 2 == 0 and odd_count % 2 == 0) or (even_count % 2 != 0 and odd_count % 2 != 0):
    print("YES")
else:
    print("NO")