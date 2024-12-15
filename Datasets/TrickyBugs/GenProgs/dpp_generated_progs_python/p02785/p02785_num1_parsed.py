def min_attacks_to_win(N, K, H):
    # sort the monsters health in ascending order
    H.sort()
    
    # start the count of attacks at 0
    count = 0
    
    # iterate over the monsters health
    for i in range(N):
        # if the current monster's health is greater than 0
        if H[i] > 0:
            # if there are remaining special moves
            if K > 0:
                # use a special move to defeat the current monster
                K -= 1
            else:
                # otherwise, do a regular attack
                count += 1
    
    return count

# get the inputs
N, K = map(int, input().split())
H = list(map(int, input().split()))

# calculate and print the minimum number of attacks needed
print(min_attacks_to_win(N, K, H))