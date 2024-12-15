from math import gcd

def determine_coprime(N, nums):
    pairwise = True
    setwise = True
    total_gcd = nums[0]
    
    for i in range(N):
        for j in range(i+1, N):
            if gcd(nums[i], nums[j]) != 1:
                pairwise = False
        
        total_gcd = gcd(total_gcd, nums[i])
        if total_gcd > 1:
            setwise = False
            
    if pairwise:
        return 'pairwise coprime'
    elif setwise:
        return 'setwise coprime'
    else:
        return 'not coprime'
    
    
# Read input
N = int(input())
nums = list(map(int, input().split()))

# Call function and print result
print(determine_coprime(N, nums))