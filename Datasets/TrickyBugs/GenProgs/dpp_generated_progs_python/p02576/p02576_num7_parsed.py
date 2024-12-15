# Given N, the number of takoyaki to make
# Given X, the maximum number of takoyaki that can be made at a time
# Given T, the time it takes to make a batch of takoyaki

# We can calculate the minimum number of minutes needed to make N pieces of takoyaki by dividing N by X and then multiplying it by T

N, X, T = map(int, input().split())

minutes = (N // X) * T
if N % X != 0: # if there are leftover takoyaki 
    minutes += T

print(minutes)