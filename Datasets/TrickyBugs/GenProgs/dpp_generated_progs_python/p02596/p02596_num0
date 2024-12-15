# program to find the first occurrence of a multiple of K in the sequence 7,77,777,...

K = int(input())

# initialize variables
position = -1
num = 0

# iterate through the sequence until a multiple of K is found
for i in range(1, K+1):
    num = num * 10 + 7
    if num % K == 0:
        position = i
        break

print(position)