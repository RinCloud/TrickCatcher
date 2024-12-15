from heapq import heappush, heappop

# Read the input
N = int(input())
S = []
for i in range(N):
    l, r = map(int, input().split())
    S.append((l, r))
S.sort()

# Check if the case where Takahashi doesn't move at all
if all(l <= 0 <= r for l, r in S):
    print(0)
    exit(0)

# Create a heap to store the right endpoint of the segments
que = []

# Create two lists to store the sums of the left and right endpoints
P = []
Q = [l for l, r in S]
Q.reverse()

# Initialize the total distance traveled by Takahashi
ans = 0

# Initialize the sums of the left and right endpoints
a = b = 0

# Initialize the pointer p
p = 0

# Iterate through the segments
for i in range(N+1):
    if i < N:
        l, r = S[i]
        
    # Move the elements in the heap que whose right endpoint is smaller than or equal to l to the list P
    while que and que[0] <= l:
        P.append(heappop(que))
        
    # Calculate the number of elements to be added to the sums a and b
    cnt = min(len(P), len(Q))
    
    # Add the elements to the sums a and b
    while p < cnt:
        a += P[p]
        b += Q[p]
        p += 1
        
    # Update the total distance traveled by Takahashi
    ans = max(ans, abs(a-b)*2)
    
    # Handle the case where the length of P is different from that of Q
    if len(P) < len(Q):
        b2 = b + Q[cnt]
        ans = max(ans, abs(a-b2)*2)
    elif len(P) > len(Q):
        a2 = a + P[cnt]
        ans = max(ans, abs(a2-b)*2)
        
    # Add the right endpoint r to the heap que
    heappush(que, r)
    
    # Update the sums a and b
    if cnt == len(Q) > 0:
        a -= P[cnt-1]
        b -= Q[cnt-1]
        
    if i < N:
        Q.pop()
        
# Print the output
print(ans)