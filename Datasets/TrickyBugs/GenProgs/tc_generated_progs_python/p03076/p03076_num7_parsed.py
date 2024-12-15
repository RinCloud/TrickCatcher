# Reading input
A=int(input())
ans=0

# Looping four times
for i in range(4):
    B=int(input())
    
    # Swapping A and B if B%10 is greater than 0 and A%10 is greater than B%10
    if A%10>B%10>0: 
        A,B=B,A
    
    # Adding the time taken to deliver the dish to ans
    ans+=-(-B//10)*10

# Printing the earliest possible time for the last dish to be delivered
print(A+ans)
