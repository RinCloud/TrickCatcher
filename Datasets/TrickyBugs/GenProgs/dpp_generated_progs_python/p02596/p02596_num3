# Program to find the first occurrence of a multiple of K in the sequence 7,77,777,...

K = int(input())

# Initialize the position count
count = 1

# Generate the sequence and find the first multiple of K
for i in range(1, K+1):
    num = int('7'*i)
    if num % K == 0:
        print(count)
        break
    count += 1
else:
    print(-1)