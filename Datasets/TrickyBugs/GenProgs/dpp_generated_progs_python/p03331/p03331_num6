# Given N, find the minimum possible value of "the sum of the digits of A" plus "the sum of the digits of B".

N = int(input())  # read the input value
half = N // 2  # divide N by 2

# loop through possible values of A from 1 to N/2
min_sum = float('inf')  # set initial minimum sum to infinity
for a in range(1, half + 1):
    b = N - a  # calculate B
    sum_digits = sum(map(int, str(a))) + sum(map(int, str(b)))  # calculate the sum of digits of A + sum of digits of B
    min_sum = min(min_sum, sum_digits)  # update minimum sum if necessary
 
print(min_sum)  # print the minimum possible value