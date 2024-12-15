'''
To find the number of pairs (x, y) that satisfy the condition, we can iterate through all possible values of x from L to R, and for each x, iterate through all possible values of y from x to R. 
For each pair (x, y), we will check if the remainder when y is divided by x is equal to the XOR of y and x. If it is, we increment a count variable by 1.
Finally, we print the count modulo 10^9 + 7 as the output.

'''

L, R = map(int, input().split())
MOD = 10**9 + 7

count = 0
for x in range(L, R+1):
    for y in range(x, R+1):
        if y % x == y ^ x:
            count += 1

print(count % MOD)