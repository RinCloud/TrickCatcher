# Approach:
* Initialize count as 0 to keep track of the number of explosions needed.
* Iterate through each monster's health.
* If the health is less than or equal to A, then it will take exactly one explosion to defeat the monster. So, increment the count by 1.
* If the health is greater than A, calculate the damage needed to defeat the monster = health - A.
* The number of explosions needed to defeat the monster = ceiling(damage / (A - B)).
* Increment the count by the number of explosions needed.
* Finally, print the count.

# Let's write the code now:

import math

N, A, B = map(int, input().split())
h = [int(input()) for _ in range(N)]

count = 0

for i in range(N):
    if h[i] <= A:
        count += 1
    else:
        damage = h[i] - A
        num_explosions = math.ceil(damage / (A - B))
        count += num_explosions

print(count)