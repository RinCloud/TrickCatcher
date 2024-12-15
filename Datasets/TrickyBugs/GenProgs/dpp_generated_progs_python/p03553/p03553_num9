# Taking input
N = int(input())
a = list(map(int, input().split()))

# Initializing max_earnings variable
max_earnings = 0

# Looping through each possible value of x
for x in range(1, N+1):
    # Calculating the earnings after smashing gems multiples of x
    earnings = 0
    for i in range(1, N+1):
        if i % x != 0:
            earnings += a[i-1]
    
    # Updating max_earnings if current earnings is greater
    max_earnings = max(max_earnings, earnings)

# Printing the maximum earnings
print(max_earnings)