# Program

a, b, c = map(int, input().split())

# If the sum of candies is divisible by 2 and sum of two smaller numbers is equal to or greater than the largest number, then it is possible to distribute candies equally
if (a + b + c) % 2 == 0 and (a + b >= c or a + c >= b or b + c >= a):
    print("Yes")
else:
    print("No")