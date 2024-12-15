'''
Algorithm:
1. Initialize a variable `operations` to 0.
2. Iterate through each stone from the second stone to the last stone.
   a. If the current stone is white and the previous stone is red, increment `operations` by 1.
3. Print the value of `operations`.
'''

N = int(input())
stones = input()

operations = 0

for i in range(1, N):
    if stones[i] == 'W' and stones[i-1] == 'R':
        operations += 1
        
print(operations)