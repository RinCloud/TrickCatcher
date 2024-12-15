#taking input from the user
n = int(input())

#initializing the variables
count = 0
answer = 1

#iterating from 1 to n
for i in range(1, n+1):
    #checking if the number is divisible by 2
    if n % 2 == 0:
        #dividing the number by 2 until it is no longer divisible by 2
        while n % 2 == 0:
            n = n // 2
            count += 1
        #updating the answer if the current count is greater than previous count
        if count > answer:
            answer = count
        #resetting the count for the next number
        count = 0

#printing the answer
print(answer)
