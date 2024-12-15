# Get the number of integers on the document
N = int(input())

# Get the list of integers on the document
A = list(map(int, input().split()))

# Check if all even numbers are divisible by 3 or 5
for num in A:
    if num % 2 == 0 and num % 3 != 0 and num % 5 != 0:
        print("DENIED")
        break
else:
    print("APPROVED")