# Introduction
- We need to calculate the number of patties Lunlun the Dachshund will eat from the bottom of a given level-N burger up to X layers.

# Approach
- First, we need to calculate the total number of layers in a level-N burger.
- If X is greater than or equal to the total number of layers, then Lunlun will eat all the layers and hence all the patties. So, we return the total number of layers.
- Otherwise, we need to recursively calculate the number of patties in the bottom-most X layers from the bottom of a level-N burger.

# Steps
1. Read the values for N and X from input.
2. Calculate the total number of layers in a level-N burger using a recursive function getTotalLayers(N).
     - If N is 0, return 1 (as a level-0 burger is a patty).
     - Otherwise, return 2 * getTotalLayers(N-1) + 3
3. If X is greater than or equal to the total number of layers, print the total number of layers as the answer and return.
4. Otherwise, calculate the number of patties using a recursive function getPatties(N, X).
     - If N is 0 or X is 0, return 0 (as there are no patties in a level-0 burger or when X is 0).
     - If X <= 1 + getTotalLayers(N-1), return getPatties(N-1, X-1) (since the bottom-most layer is a bun, we need to go one level down).
     - If X == 2 + getTotalLayers(N-1), return 1 + getPatties(N-1, X-2) (since the bottom-most two layers are a bun and a patty, we need to return 1 and go one level down).
     - Otherwise, return getTotalPatties(N-1) + 1 + getPatties(N-1, X-2-totalLayers(N-1)) (since the bottom-most layer is a bun and we need to go one level down, and also the remaining layers will be calculated for the level-N-1 burger).
5. Print the number of patties obtained from getPatties(N, X) as the answer.

# To Do
1. Implement the recursive functions getTotalLayers(N) and getPatties(N, X).
2. Read the values for N and X from input.
3. Calculate the total number of layers in a level-N burger using getTotalLayers(N).
4. If X is greater than or equal to the total number of layers, print the total number of layers and return.
5. Calculate the number of patties using getPatties(N, X).
6. Print the number of patties.