# start program
# read input values for P, Q, R
P, Q, R = map(int, input().split())

# calculate the minimum possible sum of flight times
min_sum = min(P+Q, Q+R, R+P)

# print the result
print(min_sum)
# end program