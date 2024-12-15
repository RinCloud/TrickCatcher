'''
Algorithm:

To minimize the number of operations, we need to move all the white stones to the right side of the red stones.
We can achieve this by using a two-pointer approach:
- Initialize two pointers, left and right, pointing to the first and last stone respectively.
- While left < right:
    1. If left stone is white and right stone is red, increment the number of operations and swap the two stones.
    2. If left stone is red, increment left by 1.
    3. If right stone is white, decrement right by 1.
- After the above loop, check if the left stone is white. If it is, increment the number of operations by 1.
- Print the total number of operations.

'''

import sys

def minimum_operations(n, stones):
    left = 0
    right = n - 1
    operations = 0

    while left < right:
        if stones[left] == 'W' and stones[right] == 'R':
            operations += 1
            stones[left], stones[right] = stones[right], stones[left]
        
        if stones[left] == 'R':
            left += 1
        
        if stones[right] == 'W':
            right -= 1
    
    if stones[left] == 'W':
        operations += 1
    
    return operations


if __name__ == '__main__':
    n = int(sys.stdin.readline().strip())
    stones = list(sys.stdin.readline().strip())
    result = minimum_operations(n, stones)
    print(result)