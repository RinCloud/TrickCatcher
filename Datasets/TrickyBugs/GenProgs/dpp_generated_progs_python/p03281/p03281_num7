#taking the input
N = int(input())

#function to count number of divisors
def count_divisors(n):
    count = 0
    for i in range(1, n+1):
        if n % i == 0:
            count += 1
    return count

#checking how many odd numbers with exactly 8 divisors are there
count = 0
for i in range(1, N+1):
    if i % 2 != 0 and count_divisors(i) == 8:
        count += 1

#printing the count
print(count)