# Approach:
* We need to find the minimum number of times Fennec needs to do Attack before winning.
* We can use Special Move at most K times, which means we can directly make K monsters' health 0.
* So, we need to attack the remaining monsters to reduce their health to 0.
* We can sort the monsters' health in ascending order.
* We will attack the monsters from left to right, until their health becomes 0 or less.
* We will keep track of the number of times Fennec needs to do Attack.
* Finally, we will print the minimum number of times Fennec needs to do Attack.

# Algorithm:
1. Read the input values.
2. Sort the monsters' health in ascending order.
3. Initialize the number of times Fennec needs to do Attack as 0.
4. Start a loop over the monsters' health.
    1. If the health of the current monster is greater than 0:
        1. Increment the number of times Fennec needs to do Attack by the health of the current monster.
    2. If the number of times Fennec needs to do Attack is greater than K, break the loop.
5. Print the number of times Fennec needs to do Attack.

# Dry Run:
Let's dry run the first example to check the correctness of the program.

## Input:
N = 3, K = 1
Healths = [4, 1, 5]

## Execution:
* Sorted healths = [1, 4, 5]
* Number of times Fennec needs to do Attack = 0 (initially)
* Loop 1:
    * Current monster health = 1
        * Increment number of times Fennec needs to do Attack by 1
    * Fennec can do Attack 1 time
* Loop 2:
    * Current monster health = 4
        * Increment number of times Fennec needs to do Attack by 4
    * Fennec can do Attack 4 times
* Loop 3:
    * Current monster health = 5
        * Increment number of times Fennec needs to do Attack by 5
    * Fennec can do Attack 5 times
* Number of times Fennec needs to do Attack = 1 + 4 + 5 = 10

## Output:
10