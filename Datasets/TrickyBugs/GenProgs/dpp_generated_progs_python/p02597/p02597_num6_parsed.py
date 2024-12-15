# Approach:

We can solve the problem by iteratively swapping and changing the colors of the stones until no white stone is placed to the immediate left of a red stone.

First, count the number of white stones placed to the immediate left of a red stone. Let's call this count `initial_count`.

To eliminate these undesirable white stones, we need to consider two possibilities:

1. Swapping: If there is a white stone to the immediate left of a red stone, we can swap the positions of these two stones to eliminate this undesirable combination. Each swap operation reduces the count of such undesirable combinations by 1.

2. Changing color: If there is a red stone followed by a white stone, we can change the color of the white stone to red. Each color change operation reduces the count of such undesirable combinations by 1.

So, to find the minimum number of operations needed, we need to minimize the counts of such undesirable combinations.

To do this, we can try two approaches:

Approach 1:
Let's start by changing the colors of all the stones to white. This way, there will be no undesirable combinations. The count of such combinations will be 0. However, this approach requires N color change operations.

Approach 2:
Instead of changing the colors of all the stones, we can start by counting the number of white stones placed to the immediate left of a red stone in the input arrangement. Let's call this count `initial_count`.

Now, we need to check how many of those white stones we can eliminate by swapping. We can do this by counting the number of adjacent white and red stone pairs (WR) in the input arrangement.

If the count of WR pairs is less than or equal to `initial_count`, we can just swap all of these pairs to eliminate all the desirable combinations. The minimum number of operations needed will be equal to the count of WR pairs.

In this approach, we don't need to change the colors of any stones.

Let's implement Approach 2: