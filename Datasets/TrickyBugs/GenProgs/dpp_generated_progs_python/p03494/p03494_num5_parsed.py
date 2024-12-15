# Program

## Read Input
N = int(input())
A = list(map(int, input().split()))

## Initialize operations count to 0
operations = 0

## Check if all integers are even
while all(num % 2 == 0 for num in A):
    ## Divide each integer by 2
    A = [num // 2 for num in A]
    ## Increment operations count
    operations += 1

## Print the maximum possible number of operations
print(operations)