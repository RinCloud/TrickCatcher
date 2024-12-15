def find_max_earnings(N, a):
    max_earnings = 0
    
    for i in range(1, N+1):
        if a[i-1] > 0:
            max_earnings += a[i-1]
        for j in range(2*i, N+1, i):
            a[j-1] -= a[i-1]
    
    print(max_earnings)


# Read input values
N = int(input())
a = list(map(int, input().split()))

# Call the function
find_max_earnings(N, a)