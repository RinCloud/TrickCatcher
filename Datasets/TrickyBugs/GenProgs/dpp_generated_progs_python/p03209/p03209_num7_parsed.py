# Approach:
We can solve this problem recursively. For each level L, there are 2^(L+1) - 1 layers in total. We will define a recursive function `patties_in_burger` which takes two parameters: the level of the burger `L`, and the number of layers from the bottom `X`. 

The base case is when `L=0`. In this case, if `X=1`, there are no patties. Otherwise, there is one patty.

For the recursive case (`L > 0`), if `X` is less than or equal to the number of layers in a level `(L-1)` burger, then the bottom-most `X` layers are in the lower part of the burger, so we need to recursively calculate the number of patties in the level `(L-1)` burger. 

If `X` is greater than `2^(L-1) + 1`, then the bottom-most layer is a patty. In this case, we need to recursively calculate the number of patties in the level `(L-1)` burger, and add 1 (for the current patty).

Otherwise, if `X` is exactly equal to `2^(L-1) + 1`, then the bottom-most layer is a bun. In this case, we can directly return the number of patties in the level `(L-1)` burger.

Using this recursive approach, we can calculate the number of patties in the bottom-most `X` layers from the bottom of a level-N burger.