# Here is the python program for the given problem:

N = int(input())
A = list(map(int, input().split()))

# Calculate the XOR of all the stone piles
xor_sum = A[0]
for i in range(1, N):
    xor_sum ^= A[i]

# Check if the XOR sum is zero or not
if xor_sum == 0:
    print(-1)
else:
    # Find the most significant set bit in XOR sum
    msb = 0
    while xor_sum & 1 == 0:
        msb += 1
        xor_sum >>= 1
    
    # Find the minimum number of stones to move to guarantee Takahashi's win
    cnt = 0
    for i in range(N):
        if (A[i] >> msb) & 1:
            cnt += 1

    print(cnt)