# Taking input from user
N = int(input())

A = []
B = []

# Taking array input from user
for i in range(N):
    a, b = map(int, input().split())
    A.append(a)
    B.append(b)
    
# Counting total candies Takahashi will get
candies = 0

# Loop until A and B are not equal
while A != B:
    
    # Finding maximum element in A
    max_A = max(A)
    
    # Finding maximum element in B
    max_B = max(B)
    
    # Finding the index of maximum element in A
    index_A = A.index(max_A)
    
    # Finding the index of maximum element in B
    index_B = B.index(max_B)
    
    # Decreasing the maximum element in A by 1
    A[index_A] -= 1
    
    # Decreasing the maximum element in B by 1
    B[index_B] -= 1
    
    # Giving one candy to Takahashi
    candies += 1
    
# Printing the total number of candies given to Takahashi
print(candies)