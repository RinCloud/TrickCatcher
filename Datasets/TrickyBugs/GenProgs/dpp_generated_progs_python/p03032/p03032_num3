# PROGRAM:

import sys

def max_jewel_sum(n, k, jewels):
    max_sum = 0
    
    for i in range(min(n, k) + 1):
        for left in range(i + 1):
            right = i - left
            jewels_in_hand = jewels[:left] + jewels[-right:] 
            jewels_in_hand.sort()
            curr_sum = sum(jewels_in_hand)
            
            for jewel in jewels_in_hand:
                if jewel < 0 and right < k - i:
                    curr_sum -= jewel
                    right += 1
                else:
                    break
            
            max_sum = max(max_sum, curr_sum)
    
    return max_sum

n, k = map(int, input().split())
jewels = list(map(int, input().split()))

print(max_jewel_sum(n, k, jewels))